#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class MapConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "MapConfiguration"));
	}

	template <typename T = MessageParser1MapConfiguration*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MapSlotsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Codecint64_t, Il2CppString*>*> static T& _map_mapSlots_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = MapField2int64_t, Il2CppString*>*> T& mapSlots_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& LocationsJsonsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Codecint64_t, Il2CppString*>*> static T& _map_locationsJsons_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = MapField2int64_t, Il2CppString*>*> T& locationsJsons_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& EnemyMapSlotsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1int64_t>*> static T& _repeated_enemyMapSlots_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = RepeatedField1int64_t>*> T& enemyMapSlots_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& EnemySpectreMapSlotsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1int64_t>*> static T& _repeated_enemySpectreMapSlots_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = RepeatedField1int64_t>*> T& enemySpectreMapSlots_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& TutorSpectreMapClotFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& tutorSpectreMapClot_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& TutorEnemyMapSlotFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& tutorEnemyMapSlot_() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = MessageParser1MapConfiguration*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x126B274))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x126B2D8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(MapConfiguration*))(Il2CppBase() + 0x126B3F8))(this);
	}
	template <typename T = MapConfiguration*> T Clone() {
		return ((T (*)(MapConfiguration*))(Il2CppBase() + 0x126B674))(this);
	}
	template <typename T = MapField2int64_t, Il2CppString*>*> T get_MapSlots() {
		return ((T (*)(MapConfiguration*))(Il2CppBase() + 0x126B6D0))(this);
	}
	template <typename T = MapField2int64_t, Il2CppString*>*> T get_LocationsJsons() {
		return ((T (*)(MapConfiguration*))(Il2CppBase() + 0x126B6D8))(this);
	}
	template <typename T = RepeatedField1int64_t>*> T get_EnemyMapSlots() {
		return ((T (*)(MapConfiguration*))(Il2CppBase() + 0x126B6E0))(this);
	}
	template <typename T = RepeatedField1int64_t>*> T get_EnemySpectreMapSlots() {
		return ((T (*)(MapConfiguration*))(Il2CppBase() + 0x126B6E8))(this);
	}
	template <typename T = int64_t> T get_TutorSpectreMapClot() {
		return ((T (*)(MapConfiguration*))(Il2CppBase() + 0x126B6F0))(this);
	}
	template <typename T = void> T set_TutorSpectreMapClot(int64_t value) {
		return ((T (*)(MapConfiguration*, int64_t))(Il2CppBase() + 0x126B6F8))(this, value);
	}
	template <typename T = int64_t> T get_TutorEnemyMapSlot() {
		return ((T (*)(MapConfiguration*))(Il2CppBase() + 0x126B700))(this);
	}
	template <typename T = void> T set_TutorEnemyMapSlot(int64_t value) {
		return ((T (*)(MapConfiguration*, int64_t))(Il2CppBase() + 0x126B708))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(MapConfiguration*, Il2CppObject*))(Il2CppBase() + 0x126B710))(this, other);
	}
	template <typename T = bool> T Equals_1(MapConfiguration* other) {
		return ((T (*)(MapConfiguration*, MapConfiguration*))(Il2CppBase() + 0x126B780))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(MapConfiguration*))(Il2CppBase() + 0x126B884))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MapConfiguration*))(Il2CppBase() + 0x126B960))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(MapConfiguration*, uintptr_t))(Il2CppBase() + 0x126B9C4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(MapConfiguration*))(Il2CppBase() + 0x126BB4C))(this);
	}
	template <typename T = void> T MergeFrom(MapConfiguration* other) {
		return ((T (*)(MapConfiguration*, MapConfiguration*))(Il2CppBase() + 0x126BD00))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(MapConfiguration*, uintptr_t))(Il2CppBase() + 0x126BDD4))(this, input);
	}

};

}
