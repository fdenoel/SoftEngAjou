package sweng.ajou.kr.heatingcontrolclient;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.support.v7.widget.Toolbar;
import android.widget.Button;
import android.widget.ListView;

import java.util.ArrayList;
import java.util.List;

import sweng.ajou.kr.heatingcontrolclient.adapters.TemperatureAdapter;
import sweng.ajou.kr.heatingcontrolclient.model.Sensor;

public class SensorsActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_sensors);
        Toolbar toolbar = (Toolbar) findViewById(R.id.toolbar);
        setSupportActionBar(toolbar);

        Button addItemSensor = (Button) findViewById(R.id.button);
        ListView listView = (ListView) findViewById(R.id.listView2);
        List<Sensor> itemSensor = new ArrayList<>();
        itemSensor.add(new Sensor("Kitchen 1",(double)20.0,2));
        itemSensor.add(new Sensor("Kitchen 1",(double)20.0,2));
        itemSensor.add(new Sensor("Kitchen 1",(double)20.0,2));
        itemSensor.add(new Sensor("Kitchen 1",(double)20.0,2));
        TemperatureAdapter adapter = new TemperatureAdapter(getApplicationContext(),itemSensor);

        listView.setAdapter(adapter);
    }

}
