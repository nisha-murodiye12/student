class Ladki:
    def __init__(self, ladki_name, room_number):
        self.ladki_name =ladki_name
        self.room_number = room_number

def create_ladki_list(num_rooms, ladki_per_room):
    ladki_list = []
    for room_number in range(1, num_rooms + 1):
        for ladki_number in range(1, ladki_per_room + 1):
            ladki_name = input(f"Enter name for Ladki {ladki_number} in Room {room_number}: ")
            ladki = Ladki(ladki_name, room_number)
            ladki_list.append(ladki)
    return ladki_list

def main():
    num_rooms = int(input("Enter the number of rooms: "))
    ladki_per_room = int(input("Enter the number of girls per room: "))
    
    ladki_list = create_ladki_list(num_rooms, ladki_per_room)

    for ladki in ladki_list:
        print(f"Room {ladki.room_number}, Ladki {ladki.ladki_name}")

if __name__ == "__main__":
    main()
 



