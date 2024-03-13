#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaVipDefaults
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaVipDefaults"));
	}

	template <typename T = MessageParser1ArenaVipDefaults*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& DailyChestUncommonBonusFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& dailyChestUncommonBonus_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& DailyChestRareBonusFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& dailyChestRareBonus_() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> static T& DailyChestEpicBonusFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& dailyChestEpicBonus_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1ArenaVipDefaults*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2866CBC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2866D20))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaVipDefaults*))(Il2CppBase() + 0x2866E40))(this);
	}
	template <typename T = ArenaVipDefaults*> T Clone() {
		return ((T (*)(ArenaVipDefaults*))(Il2CppBase() + 0x2866EE8))(this);
	}
	template <typename T = int32_t> T get_DailyChestUncommonBonus() {
		return ((T (*)(ArenaVipDefaults*))(Il2CppBase() + 0x2866F44))(this);
	}
	template <typename T = void> T set_DailyChestUncommonBonus(int32_t value) {
		return ((T (*)(ArenaVipDefaults*, int32_t))(Il2CppBase() + 0x2866F4C))(this, value);
	}
	template <typename T = int32_t> T get_DailyChestRareBonus() {
		return ((T (*)(ArenaVipDefaults*))(Il2CppBase() + 0x2866F54))(this);
	}
	template <typename T = void> T set_DailyChestRareBonus(int32_t value) {
		return ((T (*)(ArenaVipDefaults*, int32_t))(Il2CppBase() + 0x2866F5C))(this, value);
	}
	template <typename T = int32_t> T get_DailyChestEpicBonus() {
		return ((T (*)(ArenaVipDefaults*))(Il2CppBase() + 0x2866F64))(this);
	}
	template <typename T = void> T set_DailyChestEpicBonus(int32_t value) {
		return ((T (*)(ArenaVipDefaults*, int32_t))(Il2CppBase() + 0x2866F6C))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaVipDefaults*, Il2CppObject*))(Il2CppBase() + 0x2866F74))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaVipDefaults* other) {
		return ((T (*)(ArenaVipDefaults*, ArenaVipDefaults*))(Il2CppBase() + 0x2867020))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaVipDefaults*))(Il2CppBase() + 0x2867070))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaVipDefaults*))(Il2CppBase() + 0x28670F8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaVipDefaults*, uintptr_t))(Il2CppBase() + 0x286715C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaVipDefaults*))(Il2CppBase() + 0x286720C))(this);
	}
	template <typename T = void> T MergeFrom(ArenaVipDefaults* other) {
		return ((T (*)(ArenaVipDefaults*, ArenaVipDefaults*))(Il2CppBase() + 0x2867304))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaVipDefaults*, uintptr_t))(Il2CppBase() + 0x2867330))(this, input);
	}

};

}
