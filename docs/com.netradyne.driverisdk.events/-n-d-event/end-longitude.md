//[Netradyne Driveri SDK](../../index.md)/[com.netradyne.driverisdk.events](../index.md)/[NDEvent](index.md)/[endLongitude](end-longitude.md)



# endLongitude  
[common]  
Content  
val [endLongitude](end-longitude.md): [Double](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-double/index.html)  
More info  


Returns the longitudinal position of the vehicle when the event finished within the one-minute slice of time.



A value of 0.0 indicates that Driveri did not have GPS signal when this event occurred. Useful in depicting the event path/trail on map. Note: Every event video is one minute long, while the actual event can occur anywhere within this one-minute slice of time

  



