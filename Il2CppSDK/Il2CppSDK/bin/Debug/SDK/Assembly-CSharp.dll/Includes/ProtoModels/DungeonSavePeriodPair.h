#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class DungeonSavePeriodPair
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "DungeonSavePeriodPair"));
	}

	template <typename T = MessageParser1DungeonSavePeriodPair*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SavePeriodFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& savePeriod_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& SaveOffsetFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& saveOffset_() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = MessageParser1DungeonSavePeriodPair*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A96A98))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A96AFC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(DungeonSavePeriodPair*))(Il2CppBase() + 0x1A96C1C))(this);
	}
	template <typename T = DungeonSavePeriodPair*> T Clone() {
		return ((T (*)(DungeonSavePeriodPair*))(Il2CppBase() + 0x1A96CBC))(this);
	}
	template <typename T = int32_t> T get_SavePeriod() {
		return ((T (*)(DungeonSavePeriodPair*))(Il2CppBase() + 0x1A96D18))(this);
	}
	template <typename T = void> T set_SavePeriod(int32_t value) {
		return ((T (*)(DungeonSavePeriodPair*, int32_t))(Il2CppBase() + 0x1A96D20))(this, value);
	}
	template <typename T = int32_t> T get_SaveOffset() {
		return ((T (*)(DungeonSavePeriodPair*))(Il2CppBase() + 0x1A96D28))(this);
	}
	template <typename T = void> T set_SaveOffset(int32_t value) {
		return ((T (*)(DungeonSavePeriodPair*, int32_t))(Il2CppBase() + 0x1A96D30))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(DungeonSavePeriodPair*, Il2CppObject*))(Il2CppBase() + 0x1A96D38))(this, other);
	}
	template <typename T = bool> T Equals_1(DungeonSavePeriodPair* other) {
		return ((T (*)(DungeonSavePeriodPair*, DungeonSavePeriodPair*))(Il2CppBase() + 0x1A96DD4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(DungeonSavePeriodPair*))(Il2CppBase() + 0x1A96E14))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DungeonSavePeriodPair*))(Il2CppBase() + 0x1A96E80))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(DungeonSavePeriodPair*, uintptr_t))(Il2CppBase() + 0x1A96EE4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(DungeonSavePeriodPair*))(Il2CppBase() + 0x1A96F68))(this);
	}
	template <typename T = void> T MergeFrom(DungeonSavePeriodPair* other) {
		return ((T (*)(DungeonSavePeriodPair*, DungeonSavePeriodPair*))(Il2CppBase() + 0x1A9701C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(DungeonSavePeriodPair*, uintptr_t))(Il2CppBase() + 0x1A9703C))(this, input);
	}

};

}
