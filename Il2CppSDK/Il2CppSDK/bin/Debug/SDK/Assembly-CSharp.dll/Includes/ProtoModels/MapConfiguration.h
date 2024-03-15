#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class MapConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "MapConfiguration"));
	}

	 static MessageParser1ProtoModels::MapConfiguration*>*& _parser() {
		return *(MessageParser1ProtoModels::MapConfiguration*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MapSlotsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codecint64_t, Il2CppString*>*& _map_mapSlots_codec() {
		return *(Codecint64_t, Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 MapField2int64_t, Il2CppString*>*& mapSlots_() {
		return *(MapField2int64_t, Il2CppString*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& LocationsJsonsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codecint64_t, Il2CppString*>*& _map_locationsJsons_codec() {
		return *(Codecint64_t, Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 MapField2int64_t, Il2CppString*>*& locationsJsons_() {
		return *(MapField2int64_t, Il2CppString*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& EnemyMapSlotsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1int64_t>*& _repeated_enemyMapSlots_codec() {
		return *(FieldCodec1int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 RepeatedField1int64_t>*& enemyMapSlots_() {
		return *(RepeatedField1int64_t>**)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& EnemySpectreMapSlotsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1int64_t>*& _repeated_enemySpectreMapSlots_codec() {
		return *(FieldCodec1int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 RepeatedField1int64_t>*& enemySpectreMapSlots_() {
		return *(RepeatedField1int64_t>**)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& TutorSpectreMapClotFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& tutorSpectreMapClot_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& TutorEnemyMapSlotFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& tutorEnemyMapSlot_() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	 static MessageParser1ProtoModels::MapConfiguration*>* get_Parser() {
		return ((MessageParser1ProtoModels::MapConfiguration*>* (*)(void *))(Il2CppBase() + 0x126B274))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x126B2D8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(MapConfiguration*))(Il2CppBase() + 0x126B3F8))(this);
	}
	template <typename R = ProtoModels::MapConfiguration*> R Clone() {
		return ((R (*)(MapConfiguration*))(Il2CppBase() + 0x126B674))(this);
	}
	 MapField2int64_t, Il2CppString*>* get_MapSlots() {
		return ((MapField2int64_t, Il2CppString*>* (*)(MapConfiguration*))(Il2CppBase() + 0x126B6D0))(this);
	}
	 MapField2int64_t, Il2CppString*>* get_LocationsJsons() {
		return ((MapField2int64_t, Il2CppString*>* (*)(MapConfiguration*))(Il2CppBase() + 0x126B6D8))(this);
	}
	 RepeatedField1int64_t>* get_EnemyMapSlots() {
		return ((RepeatedField1int64_t>* (*)(MapConfiguration*))(Il2CppBase() + 0x126B6E0))(this);
	}
	 RepeatedField1int64_t>* get_EnemySpectreMapSlots() {
		return ((RepeatedField1int64_t>* (*)(MapConfiguration*))(Il2CppBase() + 0x126B6E8))(this);
	}
	template <typename R = int64_t> R get_TutorSpectreMapClot() {
		return ((R (*)(MapConfiguration*))(Il2CppBase() + 0x126B6F0))(this);
	}
	template <typename R = void> R set_TutorSpectreMapClot(int64_t value) {
		return ((R (*)(MapConfiguration*, int64_t))(Il2CppBase() + 0x126B6F8))(this, value);
	}
	template <typename R = int64_t> R get_TutorEnemyMapSlot() {
		return ((R (*)(MapConfiguration*))(Il2CppBase() + 0x126B700))(this);
	}
	template <typename R = void> R set_TutorEnemyMapSlot(int64_t value) {
		return ((R (*)(MapConfiguration*, int64_t))(Il2CppBase() + 0x126B708))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(MapConfiguration*, Il2CppObject*))(Il2CppBase() + 0x126B710))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::MapConfiguration* other) {
		return ((R (*)(MapConfiguration*, ProtoModels::MapConfiguration*))(Il2CppBase() + 0x126B780))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(MapConfiguration*))(Il2CppBase() + 0x126B884))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(MapConfiguration*))(Il2CppBase() + 0x126B960))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(MapConfiguration*, uintptr_t))(Il2CppBase() + 0x126B9C4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(MapConfiguration*))(Il2CppBase() + 0x126BB4C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::MapConfiguration* other) {
		return ((R (*)(MapConfiguration*, ProtoModels::MapConfiguration*))(Il2CppBase() + 0x126BD00))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(MapConfiguration*, uintptr_t))(Il2CppBase() + 0x126BDD4))(this, input);
	}

};

}
