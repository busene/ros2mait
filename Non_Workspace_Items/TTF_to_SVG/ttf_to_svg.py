import fontforge

def ttf2svg(i,o):
    font = fontforge.open(i)
    font.generate(o)
    font.close()