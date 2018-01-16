package problema2;

import java.util.Calendar;
import java.util.logging.Level;

public class Promotie {

	private Calendar startDate;
	private Calendar endDate;
	private String weekday;
	private String startHour;
	private String endHour;

	public Promotie(Calendar sdate, Calendar edate, String w, String sH, String eH) {

		startDate = sdate;
		endDate = edate;
		weekday = w;
		startHour = sH;
		endHour = eH;

	}

	public boolean isActive() {
		Calendar now = Calendar.getInstance();
		return isActiveHelper(now);
	}

	public boolean isActiveHelper(Calendar c) {

		if (startDate != null && c.getTime().getDate() < startDate.getTime().getDate())
			return false;

		if (endDate != null && c.getTime().getDate() > endDate.getTime().getDate())
			return false;

		if (!weekday.contains("" + c.getTime().getDay()))
			return false;

		if (startHour != null && c.getTime().getHours() < Integer.parseInt(startHour))
			return false;

		if (c.getTime().getHours() > Integer.parseInt(endHour))
			return false;

		return true;

	}

}