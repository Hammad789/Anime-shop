import cv2
import pyautogui
import os

# Get the path to the directory containing the script
script_dir = os.path.dirname(os.path.abspath(__file__))

# Specify the path to the Haar cascade XML file
cascade_file_path = os.path.join(script_dir, 'haarcascade_hand.xml')

# Function to recognize gestures from the webcam feed
def recognize_gesture(frame):
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    
    # Load the Haar cascade classifier for hand detection
    hand_cascade = cv2.CascadeClassifier(cascade_file_path)
    
    # Detect hands in the grayscale image
    hands = hand_cascade.detectMultiScale(gray, 1.3, 5)
    
    if len(hands) > 0:
        return "thumbs_up"  # Placeholder for gesture recognition
    else:
        return None

# Function to control the game based on recognized gestures
def control_game(gesture_label):
    if gesture_label == "thumbs_up":
        pyautogui.keyDown('w')  # Accelerate
    else:
        pyautogui.keyUp('w')  # Release acceleration key

# Main function to capture video frames and control the game
def main():
    cap = cv2.VideoCapture(0)  # Open the webcam
    
    while True:
        ret, frame = cap.read()  # Capture frame
        
        cv2.imshow('frame', frame)  # Display frame
        
        gesture_label = recognize_gesture(frame)  # Recognize gesture
        
        control_game(gesture_label)  # Control the game based on gesture
        
        if cv2.waitKey(1) & 0xFF == ord('q'):  # Quit if 'q' is pressed
            break
    
    cap.release()  # Release the webcam
    cv2.destroyAllWindows()  # Close OpenCV windows

if __name__ == "__main__":
    main()
