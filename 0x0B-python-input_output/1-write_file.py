#!/usr/bin/python3
"""Defines a file-writing function"""

def write_file(filename="", text=""):
    """Write a string to a YTF8 text file.

    Args:
        filename (str): name of the file to write
        text (str): text to writ to the file
    Returns:
        The number of characters written
    """
    with open(filename, "W", encoding="utf-8") as f:
        return f.write(text)
