package sweng.ajou.kr.heatingcontrolclient;

import android.content.Intent;
import android.os.AsyncTask;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.View;
import android.widget.Button;
import android.widget.ListView;

import org.json.JSONArray;
import org.json.JSONException;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;
import java.net.URLConnection;
import java.net.URLEncoder;
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
        Button manualTemperatureButton = (Button) findViewById(R.id.activity_envioment_detail_set_temp_manualy);

        if(getIntent()!=null){
            getSupportActionBar().setTitle(getIntent().getStringExtra("name"));
        }
        manualTemperatureButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent myIntent = new Intent(EnviomentDetail.this,SetTempManualy.class);
                myIntent.putExtra("name",getIntent().getStringExtra("name"));
                startActivity(myIntent);
            }
        });

        List<Schedule> schedules = new ArrayList<>();
        schedules.add(new Schedule(22,"16:00"));
        schedules.add(new Schedule(17,"23:00"));
        schedules.add(new Schedule(20,"07:00"));
        schedules.add(new Schedule(16,"09:00"));

        ScheduleAdapter adapter = new ScheduleAdapter(getApplicationContext(),schedules);
        listView.setAdapter(adapter);

    }


}
