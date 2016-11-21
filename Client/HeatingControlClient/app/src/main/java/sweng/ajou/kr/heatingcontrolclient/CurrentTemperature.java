package sweng.ajou.kr.heatingcontrolclient;

import android.content.Intent;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.support.v7.widget.Toolbar;
import android.view.ContextMenu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ListView;

import java.util.ArrayList;
import java.util.List;

import sweng.ajou.kr.heatingcontrolclient.adapters.TemperatureAdapter;
import sweng.ajou.kr.heatingcontrolclient.model.Sensor;

public class CurrentTemperature extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_current_temperature);
        Toolbar toolbar = (Toolbar) findViewById(R.id.toolbar);
        setSupportActionBar(toolbar);

        ListView listView = (ListView) findViewById(R.id.listView2);
        List<Sensor> itemSensor = new ArrayList<>();
        itemSensor.add(new Sensor("Kitchen 1",(double)20.0,2));
        itemSensor.add(new Sensor("Kitchen 1",(double)20.0,2));
        itemSensor.add(new Sensor("Kitchen 1",(double)20.0,2));
        itemSensor.add(new Sensor("Kitchen 1",(double)20.0,2));
        TemperatureAdapter adapter = new TemperatureAdapter(getApplicationContext(),itemSensor);

        listView.setAdapter(adapter);

        registerForContextMenu(listView);

        listView.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> adapterView, View view, int i, long l) {
                startActivity(new Intent(CurrentTemperature.this, EnviomentDetail.class));
            }
        });

    }

    @Override
    public void onCreateContextMenu(ContextMenu menu, View v, ContextMenu.ContextMenuInfo menuInfo) {
        if (v.getId() == R.id.listView2) {
            ListView lv = (ListView) v;
            AdapterView.AdapterContextMenuInfo acmi = (AdapterView.AdapterContextMenuInfo) menuInfo;
            Sensor obj = (Sensor) lv.getItemAtPosition(acmi.position);
/*
            menu.add("One");
            menu.add("Two");
            menu.add("Three");
            menu.add(obj.getName());*/

            MenuInflater inflater = getMenuInflater();
            inflater.inflate(R.menu.current_temp_context_menu, menu);
        }
    }
    @Override
    public boolean onContextItemSelected(MenuItem item) {
        AdapterView.AdapterContextMenuInfo info = (AdapterView.AdapterContextMenuInfo) item.getMenuInfo();
        switch (item.getItemId()) {
            case R.id.deleteItem:
                //editNote(info.id);
                return true;

            default:
                return super.onContextItemSelected(item);
        }
    }
}
