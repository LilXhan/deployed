from flask import Flask, render_template

app = Flask(__name__)

items = ['condicionales', 'mientras', 'para', 'arreglos']

@app.route("/")
def index_udh():
    return render_template("/index.html", items=items)


@app.route("/condicionales")
def condicionales_udh():
    return render_template("/condicionales.html")


@app.route("/mientras")
def mientras_udh():
    return render_template("/mientras.html")


@app.route("/para")
def para_udh():
    return render_template("/para.html")


@app.route("/arreglos")
def arreglos_udh():
    return render_template("/arreglos.html")