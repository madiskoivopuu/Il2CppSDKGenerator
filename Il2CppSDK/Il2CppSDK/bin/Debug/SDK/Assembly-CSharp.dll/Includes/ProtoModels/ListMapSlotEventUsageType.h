#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ListMapSlotEventUsageType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ListMapSlotEventUsageType"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SlotFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_slot_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& slot_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& FirstIncomeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_firstIncome_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> T& firstIncome_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& LastDeathInPvpFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& lastDeathInPvp_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& CountDeathInPvpFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& countDeathInPvp_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& CoolDownTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& coolDownTime_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& CountLoseStricSelectFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& countLoseStricSelect_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& LastLoseStricFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& lastLoseStric_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& CountLoseStricForCoolDownFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& countLoseStricForCoolDown_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& ActiveAFKLoseStricFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& activeAFKLoseStric_() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> static T& TourneyCoolDownFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& tourneyCoolDown_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& FirstClassFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& firstClass_() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& CountBonusMailFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _map_countBonusMail_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> T& countBonusMail_() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& PveResetTimeUnixFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& pveResetTimeUnix_() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> static T& PveCountResetFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& pveCountReset_() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> static T& PveCoolDownTimeUnixFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& pveCoolDownTimeUnix_() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> static T& LastBonusMailFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _map_lastBonusMail_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> T& lastBonusMail_() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x142F2F0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x142F354))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F474))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F804))(this);
	}
	template <typename T = void*> T get_Slot() {
		return ((T (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F860))(this);
	}
	template <typename T = void*> T get_FirstIncome() {
		return ((T (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F868))(this);
	}
	template <typename T = int64_t> T get_LastDeathInPvp() {
		return ((T (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F870))(this);
	}
	template <typename T = void> T set_LastDeathInPvp(int64_t value) {
		return ((T (*)(ListMapSlotEventUsageType*, int64_t))(Il2CppBase() + 0x142F878))(this, value);
	}
	template <typename T = int32_t> T get_CountDeathInPvp() {
		return ((T (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F880))(this);
	}
	template <typename T = void> T set_CountDeathInPvp(int32_t value) {
		return ((T (*)(ListMapSlotEventUsageType*, int32_t))(Il2CppBase() + 0x142F888))(this, value);
	}
	template <typename T = int64_t> T get_CoolDownTime() {
		return ((T (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F890))(this);
	}
	template <typename T = void> T set_CoolDownTime(int64_t value) {
		return ((T (*)(ListMapSlotEventUsageType*, int64_t))(Il2CppBase() + 0x142F898))(this, value);
	}
	template <typename T = int32_t> T get_CountLoseStricSelect() {
		return ((T (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F8A0))(this);
	}
	template <typename T = void> T set_CountLoseStricSelect(int32_t value) {
		return ((T (*)(ListMapSlotEventUsageType*, int32_t))(Il2CppBase() + 0x142F8A8))(this, value);
	}
	template <typename T = int64_t> T get_LastLoseStric() {
		return ((T (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F8B0))(this);
	}
	template <typename T = void> T set_LastLoseStric(int64_t value) {
		return ((T (*)(ListMapSlotEventUsageType*, int64_t))(Il2CppBase() + 0x142F8B8))(this, value);
	}
	template <typename T = int32_t> T get_CountLoseStricForCoolDown() {
		return ((T (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F8C0))(this);
	}
	template <typename T = void> T set_CountLoseStricForCoolDown(int32_t value) {
		return ((T (*)(ListMapSlotEventUsageType*, int32_t))(Il2CppBase() + 0x142F8C8))(this, value);
	}
	template <typename T = bool> T get_ActiveAFKLoseStric() {
		return ((T (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F8D0))(this);
	}
	template <typename T = void> T set_ActiveAFKLoseStric(bool value) {
		return ((T (*)(ListMapSlotEventUsageType*, bool))(Il2CppBase() + 0x142F8D8))(this, value);
	}
	template <typename T = uintptr_t> T get_TourneyCoolDown() {
		return ((T (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F8E4))(this);
	}
	template <typename T = void> T set_TourneyCoolDown(uintptr_t value) {
		return ((T (*)(ListMapSlotEventUsageType*, uintptr_t))(Il2CppBase() + 0x142F8EC))(this, value);
	}
	template <typename T = Il2CppString*> T get_FirstClass() {
		return ((T (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F8F4))(this);
	}
	template <typename T = void> T set_FirstClass(Il2CppString* value) {
		return ((T (*)(ListMapSlotEventUsageType*, Il2CppString*))(Il2CppBase() + 0x142F8FC))(this, value);
	}
	template <typename T = void*> T get_CountBonusMail() {
		return ((T (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F97C))(this);
	}
	template <typename T = int64_t> T get_PveResetTimeUnix() {
		return ((T (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F984))(this);
	}
	template <typename T = void> T set_PveResetTimeUnix(int64_t value) {
		return ((T (*)(ListMapSlotEventUsageType*, int64_t))(Il2CppBase() + 0x142F98C))(this, value);
	}
	template <typename T = int32_t> T get_PveCountReset() {
		return ((T (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F994))(this);
	}
	template <typename T = void> T set_PveCountReset(int32_t value) {
		return ((T (*)(ListMapSlotEventUsageType*, int32_t))(Il2CppBase() + 0x142F99C))(this, value);
	}
	template <typename T = int64_t> T get_PveCoolDownTimeUnix() {
		return ((T (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F9A4))(this);
	}
	template <typename T = void> T set_PveCoolDownTimeUnix(int64_t value) {
		return ((T (*)(ListMapSlotEventUsageType*, int64_t))(Il2CppBase() + 0x142F9AC))(this, value);
	}
	template <typename T = void*> T get_LastBonusMail() {
		return ((T (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F9B4))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ListMapSlotEventUsageType*, uintptr_t))(Il2CppBase() + 0x142F9BC))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ListMapSlotEventUsageType*, uintptr_t))(Il2CppBase() + 0x142FA2C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142FC14))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142FE04))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ListMapSlotEventUsageType*, uintptr_t))(Il2CppBase() + 0x142FE68))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x14301F4))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ListMapSlotEventUsageType*, uintptr_t))(Il2CppBase() + 0x1430624))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ListMapSlotEventUsageType*, uintptr_t))(Il2CppBase() + 0x1430804))(this, input);
	}

};

}
