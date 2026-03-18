<?php

namespace Models;

class Usuario extends Persona
{
    // Atributos
    private $id;
    private $email;

    // Constructor
    public function __construct($id = null, $nombres = null, $apellidos = null, $edad = null, $genero = null, $email = null)
    {
        parent::__construct($nombres, $apellidos, $edad, $genero);
        $this->id = $id;
        $this->email = $email;
    }

    // Getters y Setters
    public function getId()
    {
        return $this->id;
    }

    public function setId($id)
    {
        $this->id = $id;
    }

    public function getEmail()
    {
        return $this->email;
    }

    public function setEmail($email)
    {
        $this->email = $email;
    }

    // Método para mostrar el usuario
    public function mostrar()
    {
        return "ID: {$this->id}, Nombres: {$this->getNombres()}, Apellidos: {$this->getApellidos()}, Edad: {$this->getEdad()}, Genero: {$this->getGenero()}, Email: {$this->email}";
    }
}
