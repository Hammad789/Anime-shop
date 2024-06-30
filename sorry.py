import turtle
import time

# Set up the screen
screen = turtle.Screen()
screen.bgcolor("lightblue")
screen.title("Apology to Noor")

# Create a turtle for the text
text_turtle = turtle.Turtle()
text_turtle.hideturtle()
text_turtle.color("darkred")
text_turtle.penup()

# Create a turtle for the sad emoji
emoji_turtle = turtle.Turtle()
emoji_turtle.hideturtle()
emoji_turtle.color("yellow")
emoji_turtle.shape("circle")
emoji_turtle.penup()

# Function to display the sad emoji
def draw_sad_emoji(x, y):
    emoji_turtle.goto(x, y)
    emoji_turtle.showturtle()
    emoji_turtle.stamp()
    emoji_turtle.hideturtle()
    emoji_turtle.color("black")
    emoji_turtle.goto(x-10, y+10)
    emoji_turtle.dot(5)
    emoji_turtle.goto(x+10, y+10)
    emoji_turtle.dot(5)
    emoji_turtle.goto(x, y-10)
    emoji_turtle.setheading(-90)
    emoji_turtle.circle(10, 180)
    emoji_turtle.hideturtle()

# Function to display a message
def display_message(message, x, y, font_size=20):
    text_turtle.goto(x, y)
    text_turtle.write(message, align="center", font=("Arial", font_size, "bold"))

# Messages and quotes
messages = [
    "Sorry Noor",
    "I didn't mean to hurt you",
    "Please forgive me",
    "I miss our friendship",
    "I promise to be better",
    "A true friend is the best possession - Benjamin Franklin",
    "Friendship is the only cement that will ever hold the world together - Woodrow Wilson"
]

# Display the messages with animations
text_turtle.clear()
for i, message in enumerate(messages):
    display_message(message, 0, 50)
    draw_sad_emoji(-50, -50)
    draw_sad_emoji(50, -50)
    time.sleep(3)
    text_turtle.clear()

# Display a final message
display_message("I'm really sorry, Noor!", 0, 50)
draw_sad_emoji(-50, -50)
draw_sad_emoji(50, -50)

# Keep the window open until clicked
screen.exitonclick()
e