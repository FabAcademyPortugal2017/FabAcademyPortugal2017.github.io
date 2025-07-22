void imprime_dia_da_semana(int dia)
{
  switch (dia)
  {
    case 1:
      Serial.println("Domingo");
    break;
    case 2:
      Serial.println("Segunda");
    break;
    case 3:
      Serial.println("Terca");
    break;
    case 4:
      Serial.println("Quarta");
    break;
    case 5:
      Serial.println("Quinta");
    break;
    case 6:
      Serial.println("Sexta");
    break;
    case 7:
      Serial.println("Sabado");
    break;
  }
}
