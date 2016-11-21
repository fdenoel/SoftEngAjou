package sweng.ajou.kr.heatingcontrolclient;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.widget.ListView;

import java.util.ArrayList;
import java.util.List;

import sweng.ajou.kr.heatingcontrolclient.adapters.ScheduleAdapter;
import sweng.ajou.kr.heatingcontrolclient.model.Schedule;

public class EnviomentDetail extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_envioment_detail);

        ListView listView = (ListView) findViewById(R.id.envioment_detail_schedule_temp);

        List<Schedule> schedules = new ArrayList<>();
        schedules.add(new Schedule(22,"16:00"));
        schedules.add(new Schedule(17,"23:00"));
        schedules.add(new Schedule(20,"07:00"));
        schedules.add(new Schedule(16,"09:00"));

        ScheduleAdapter adapter = new ScheduleAdapter(getApplicationContext(),schedules);
        listView.setAdapter(adapter);

    }
}
