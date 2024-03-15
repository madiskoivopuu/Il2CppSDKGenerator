#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class DungeonSavePeriodPair
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "DungeonSavePeriodPair"));
	}

	 static MessageParser1<ProtoModels::DungeonSavePeriodPair*>*& _parser() {
		return *(MessageParser1<ProtoModels::DungeonSavePeriodPair*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& SavePeriodFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& savePeriod_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& SaveOffsetFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& saveOffset_() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	 static MessageParser1<ProtoModels::DungeonSavePeriodPair*>* get_Parser() {
		return ((MessageParser1<ProtoModels::DungeonSavePeriodPair*>* (*)(void *))(Il2CppBase() + 0x1A96A98))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A96AFC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(DungeonSavePeriodPair*))(Il2CppBase() + 0x1A96C1C))(this);
	}
	template <typename R = ProtoModels::DungeonSavePeriodPair*> R Clone() {
		return ((R (*)(DungeonSavePeriodPair*))(Il2CppBase() + 0x1A96CBC))(this);
	}
	template <typename R = int32_t> R get_SavePeriod() {
		return ((R (*)(DungeonSavePeriodPair*))(Il2CppBase() + 0x1A96D18))(this);
	}
	template <typename R = void> R set_SavePeriod(int32_t value) {
		return ((R (*)(DungeonSavePeriodPair*, int32_t))(Il2CppBase() + 0x1A96D20))(this, value);
	}
	template <typename R = int32_t> R get_SaveOffset() {
		return ((R (*)(DungeonSavePeriodPair*))(Il2CppBase() + 0x1A96D28))(this);
	}
	template <typename R = void> R set_SaveOffset(int32_t value) {
		return ((R (*)(DungeonSavePeriodPair*, int32_t))(Il2CppBase() + 0x1A96D30))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(DungeonSavePeriodPair*, Il2CppObject*))(Il2CppBase() + 0x1A96D38))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::DungeonSavePeriodPair* other) {
		return ((R (*)(DungeonSavePeriodPair*, ProtoModels::DungeonSavePeriodPair*))(Il2CppBase() + 0x1A96DD4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(DungeonSavePeriodPair*))(Il2CppBase() + 0x1A96E14))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(DungeonSavePeriodPair*))(Il2CppBase() + 0x1A96E80))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(DungeonSavePeriodPair*, uintptr_t))(Il2CppBase() + 0x1A96EE4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(DungeonSavePeriodPair*))(Il2CppBase() + 0x1A96F68))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::DungeonSavePeriodPair* other) {
		return ((R (*)(DungeonSavePeriodPair*, ProtoModels::DungeonSavePeriodPair*))(Il2CppBase() + 0x1A9701C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(DungeonSavePeriodPair*, uintptr_t))(Il2CppBase() + 0x1A9703C))(this, input);
	}

};

}
