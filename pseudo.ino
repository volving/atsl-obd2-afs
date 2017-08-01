bool isBeamOn = false
int swa = 0

int afs = {
  left: {
    on: false,
    at: 0
  },
  right: {
    on: false,
    at: 0
  }
}

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  if (isBeamOn) {
    if (swa < -4) {
      afs.left.on = true
      afs.left.at = new Date() 
    }
    if ( swa > 4) {
      afs.right.on = true
      afs.riight.at = new Date()
    }
    delay(500)
  }
  
  if (afs.left.on) {
    if (new Date() - afs.left.at > 4000) {
      afs.left.on = false
    }
  }
  
  if (afs.right.on) {
    if (new Date() - afs.right.at > 4000) {
      afs.right.on = false
    }
  }
}
