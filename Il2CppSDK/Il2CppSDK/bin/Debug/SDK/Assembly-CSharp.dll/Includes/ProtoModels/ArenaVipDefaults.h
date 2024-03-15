#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaVipDefaults
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaVipDefaults"));
	}

	 static MessageParser1ProtoModels::ArenaVipDefaults*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaVipDefaults*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& DailyChestUncommonBonusFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& dailyChestUncommonBonus_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& DailyChestRareBonusFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& dailyChestRareBonus_() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> static R& DailyChestEpicBonusFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& dailyChestEpicBonus_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::ArenaVipDefaults*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaVipDefaults*>* (*)(void *))(Il2CppBase() + 0x2866CBC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x2866D20))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaVipDefaults*))(Il2CppBase() + 0x2866E40))(this);
	}
	template <typename R = ProtoModels::ArenaVipDefaults*> R Clone() {
		return ((R (*)(ArenaVipDefaults*))(Il2CppBase() + 0x2866EE8))(this);
	}
	template <typename R = int32_t> R get_DailyChestUncommonBonus() {
		return ((R (*)(ArenaVipDefaults*))(Il2CppBase() + 0x2866F44))(this);
	}
	template <typename R = void> R set_DailyChestUncommonBonus(int32_t value) {
		return ((R (*)(ArenaVipDefaults*, int32_t))(Il2CppBase() + 0x2866F4C))(this, value);
	}
	template <typename R = int32_t> R get_DailyChestRareBonus() {
		return ((R (*)(ArenaVipDefaults*))(Il2CppBase() + 0x2866F54))(this);
	}
	template <typename R = void> R set_DailyChestRareBonus(int32_t value) {
		return ((R (*)(ArenaVipDefaults*, int32_t))(Il2CppBase() + 0x2866F5C))(this, value);
	}
	template <typename R = int32_t> R get_DailyChestEpicBonus() {
		return ((R (*)(ArenaVipDefaults*))(Il2CppBase() + 0x2866F64))(this);
	}
	template <typename R = void> R set_DailyChestEpicBonus(int32_t value) {
		return ((R (*)(ArenaVipDefaults*, int32_t))(Il2CppBase() + 0x2866F6C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaVipDefaults*, Il2CppObject*))(Il2CppBase() + 0x2866F74))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaVipDefaults* other) {
		return ((R (*)(ArenaVipDefaults*, ProtoModels::ArenaVipDefaults*))(Il2CppBase() + 0x2867020))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaVipDefaults*))(Il2CppBase() + 0x2867070))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaVipDefaults*))(Il2CppBase() + 0x28670F8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaVipDefaults*, uintptr_t))(Il2CppBase() + 0x286715C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaVipDefaults*))(Il2CppBase() + 0x286720C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaVipDefaults* other) {
		return ((R (*)(ArenaVipDefaults*, ProtoModels::ArenaVipDefaults*))(Il2CppBase() + 0x2867304))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaVipDefaults*, uintptr_t))(Il2CppBase() + 0x2867330))(this, input);
	}

};

}
