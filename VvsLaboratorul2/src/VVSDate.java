
public class VVSDate   {
	
        private int day,month,year;

        public VVSDate(int day, int month, int year) {
                this.day = day;
                this.month = month;
                this.year = year;
        }
        
        

        public int getDays(VVSDate other) {
                return daysSinceZero() - other.daysSinceZero();
        }

        private int daysSinceZero() {
                int[] daySums = new int[]{0,31,59,90,120,151,181,212,243,273,304,334,365};
                int d = day + daySums[month-1] + (year*365) + year/4 - year/100 + year/400;
                if ((year%400==0 || (year%4==0 && year%100!=0)) && month<=2)
                        d--;
                return d;
        }
        
        

    	public static void main(String[] Args) {
    		
    		VVSDate vd = new VVSDate(1, 1, 2012);
    		VVSDate vd2 = new VVSDate(1, 3, 2012);
    		System.out.print(vd.getDays(vd2));
    		
    	}
    		
    		
    	}
        
        



