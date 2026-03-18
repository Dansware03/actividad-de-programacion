<?php

namespace Models;

class Estudiante extends Usuario
{
    private $idEstudiante;
    private $nacionalidad;
    private $nacimiento;
    private $peso;
    private $altura;
    private $tallaVestimenta;
    private $tallaPantalones;
    private $tallaZapatos;
    private $visualesImpar;
    private $auditivosImpar;
    private $autismo;
    private $otrasDiscapacidades;
    private $alergias;
    private $enfermedadesCertificadas;
    private $hermanosEscuela;
    private $estaActivo;

    public function __construct($idEstudiante, $nombres, $apellidos, $edad, $genero, $email, $nacionalidad, $nacimiento, $peso, $altura, $tallaVestimenta, $tallaPantalones, $tallaZapatos, $visualesImpar, $auditivosImpar, $autismo, $otrasDiscapacidades, $alergias, $enfermedadesCertificadas, $hermanosEscuela, $estaActivo)
    {
        parent::__construct($idEstudiante, $nombres, $apellidos, $edad, $genero, $email);
        $this->idEstudiante = $idEstudiante;
        $this->nacionalidad = $nacionalidad;
        $this->nacimiento = $nacimiento;
        $this->peso = $peso;
        $this->altura = $altura;
        $this->tallaVestimenta = $tallaVestimenta;
        $this->tallaPantalones = $tallaPantalones;
        $this->tallaZapatos = $tallaZapatos;
        $this->visualesImpar = $visualesImpar;
        $this->auditivosImpar = $auditivosImpar;
        $this->autismo = $autismo;
        $this->otrasDiscapacidades = $otrasDiscapacidades;
        $this->alergias = $alergias;
        $this->enfermedadesCertificadas = $enfermedadesCertificadas;
        $this->hermanosEscuela = $hermanosEscuela;
        $this->estaActivo = $estaActivo;
    }

    public function getIdEstudiante()
    {
        return $this->idEstudiante;
    }

    public function setIdEstudiante($idEstudiante)
    {
        $this->idEstudiante = $idEstudiante;
    }

    public function getNacionalidad()
    {
        return $this->nacionalidad;
    }

    public function setNacionalidad($nacionalidad)
    {
        $this->nacionalidad = $nacionalidad;
    }

    public function getNacimiento()
    {
        return $this->nacimiento;
    }

    public function setNacimiento($nacimiento)
    {
        $this->nacimiento = $nacimiento;
    }

    public function getPeso()
    {
        return $this->peso;
    }

    public function setPeso($peso)
    {
        $this->peso = $peso;
    }

    public function getAltura()
    {
        return $this->altura;
    }

    public function setAltura($altura)
    {
        $this->altura = $altura;
    }

    public function getTallaVestimenta()
    {
        return $this->tallaVestimenta;
    }

    public function setTallaVestimenta($tallaVestimenta)
    {
        $this->tallaVestimenta = $tallaVestimenta;
    }

    public function getTallaPantalones()
    {
        return $this->tallaPantalones;
    }

    public function setTallaPantalones($tallaPantalones)
    {
        $this->tallaPantalones = $tallaPantalones;
    }

    public function getTallaZapatos()
    {
        return $this->tallaZapatos;
    }

    public function setTallaZapatos($tallaZapatos)
    {
        $this->tallaZapatos = $tallaZapatos;
    }

    public function getVisualesImpar()
    {
        return $this->visualesImpar;
    }

    public function setVisualesImpar($visualesImpar)
    {
        $this->visualesImpar = $visualesImpar;
    }

    public function getAuditivosImpar()
    {
        return $this->auditivosImpar;
    }

    public function setAuditivosImpar($auditivosImpar)
    {
        $this->auditivosImpar = $auditivosImpar;
    }

    public function getAutismo()
    {
        return $this->autismo;
    }

    public function setAutismo($autismo)
    {
        $this->autismo = $autismo;
    }

    public function getOtrasDiscapacidades()
    {
        return $this->otrasDiscapacidades;
    }

    public function setOtrasDiscapacidades($otrasDiscapacidades)
    {
        $this->otrasDiscapacidades = $otrasDiscapacidades;
    }

    public function getAlergias()
    {
        return $this->alergias;
    }

    public function setAlergias($alergias)
    {
        $this->alergias = $alergias;
    }

    public function getEnfermedadesCertificadas()
    {
        return $this->enfermedadesCertificadas;
    }

    public function setEnfermedadesCertificadas($enfermedadesCertificadas)
    {
        $this->enfermedadesCertificadas = $enfermedadesCertificadas;
    }

    public function getHermanosEscuela()
    {
        return $this->hermanosEscuela;
    }

    public function setHermanosEscuela($hermanosEscuela)
    {
        $this->hermanosEscuela = $hermanosEscuela;
    }

    public function getEstaActivo()
    {
        return $this->estaActivo;
    }

    public function setEstaActivo($estaActivo)
    {
        $this->estaActivo = $estaActivo;
    }

    public function mostrarEstudiante()
    {
        return parent::mostrar() . "<br>" .
            "Nacionalidad: " . $this->getNacionalidad() . "<br>" .
            "Fecha de Nacimiento: " . $this->getNacimiento() . "<br>" .
            "Peso: " . $this->getPeso() . "<br>" .
            "Altura: " . $this->getAltura() . "<br>" .
            "Talla de Vestimenta: " . $this->getTallaVestimenta() . "<br>" .
            "Talla de Pantalones: " . $this->getTallaPantalones() . "<br>" .
            "Talla de Zapatos: " . $this->getTallaZapatos() . "<br>" .
            "Visuales Impar: " . $this->getVisualesImpar() . "<br>" .
            "Auditivos Impar: " . $this->getAuditivosImpar() . "<br>" .
            "Autismo: " . $this->getAutismo() . "<br>" .
            "Otras Discapacidades: " . $this->getOtrasDiscapacidades() . "<br>" .
            "Alergias: " . $this->getAlergias() . "<br>" .
            "Enfermedades Certificadas: " . $this->getEnfermedadesCertificadas() . "<br>" .
            "Hermanos Escuela: " . $this->getHermanosEscuela() . "<br>" .
            "Esta Activo: " . $this->getEstaActivo() . "<br>";
    }

}
