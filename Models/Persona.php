<?php

namespace Models;

class Persona
{
    protected $nombres;
    protected $apellidos;
    protected $edad;
    protected $genero;

    public function __construct($nombres, $apellidos, $edad, $genero)
    {
        $this->registrarPersona($nombres, $apellidos, $edad, $genero);
    }

    public function registrarPersona($nombres, $apellidos, $edad, $genero)
    {
        $this->nombres = $nombres;
        $this->apellidos = $apellidos;
        $this->edad = $edad;
        $this->genero = $genero;
    }

    public function getNombres()
    {
        return $this->nombres;
    }

    public function getApellidos()
    {
        return $this->apellidos;
    }

    public function getEdad()
    {
        return $this->edad;
    }

    public function getGenero()
    {
        return $this->genero;
    }
}