import cv2 # type: ignore
import face_recognition # type: ignore
# Load the Haar Cascade Classifier for face detection
face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')

# Load the known faces
known_faces = []
known_face_names = []

# Load the image of the person you want to recognize
image = face_recognition.load_image_file("1000030342.jpg")
face_encoding = face_recognition.face_encodings(image)[0]

known_faces.append(face_encoding)
known_face_names.append("Ankit Kumar Chaudhary")

# Initialize the video capture
cap = cv2.VideoCapture(0)

while True:
    # Read a frame from the video capture
    ret, frame = cap.read()

    # Convert the frame to grayscale
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    # Detect faces in the grayscale frame
    faces = face_cascade.detectMultiScale(gray, scaleFactor=1.1, minNeighbors=5)

    # Loop through the detected faces
    for (x, y, w, h) in faces:
        # Draw a rectangle around the face
        cv2.rectangle(frame, (x, y), (x+w, y+h), (0, 255, 0), 2)

        # Extract the face from the frame
        face = frame[y:y+h, x:x+w]

        # Recognize the face
        face_encoding = face_recognition.face_encodings(face)[0]
        matches = face_recognition.compare_faces(known_faces, face_encoding)

        # Check if the face is recognized
        if True in matches:
            # Get the index of the recognized face
            match_index = matches.index(True)

            # Get the name of the recognized face
            name = known_face_names[match_index]

            # Draw the name of the recognized face
            cv2.putText(frame, name, (x, y-10), cv2.FONT_HERSHEY_SIMPLEX, 0.9, (36,255,12), 2)

    # Display the frame
    cv2.imshow('Frame', frame)

    # Check for the 'q' key to exit
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Release the video capture and close all windows
cap.release()
cv2.destroyAllWindows()