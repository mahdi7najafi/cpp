using System;
class HelloWorld {
  static void Main() {
    	int[] readings = new int[5];
		readings[0] = 0;
		readings[1] = 4;
		readings[2] = 5;
		readings[3] = 1;
		readings[4] = 7;
		
		for(int i=0;i< readings.Length;i++)
		{
			Console.WriteLine(readings[i]);
		}
  }
}