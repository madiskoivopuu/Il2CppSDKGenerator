#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ListMapSlotEventUsageType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ListMapSlotEventUsageType"));
	}

	 static MessageParser1<ProtoModels::ListMapSlotEventUsageType*>*& _parser() {
		return *(MessageParser1<ProtoModels::ListMapSlotEventUsageType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& SlotFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::MapSlotEventUsageType*>*& _repeated_slot_codec() {
		return *(FieldCodec1<ProtoModels::MapSlotEventUsageType*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::MapSlotEventUsageType*>*& slot_() {
		return *(RepeatedField1<ProtoModels::MapSlotEventUsageType*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& FirstIncomeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::MapSlotFirstIncomeType*>*& _repeated_firstIncome_codec() {
		return *(FieldCodec1<ProtoModels::MapSlotFirstIncomeType*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1<ProtoModels::MapSlotFirstIncomeType*>*& firstIncome_() {
		return *(RepeatedField1<ProtoModels::MapSlotFirstIncomeType*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& LastDeathInPvpFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& lastDeathInPvp_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& CountDeathInPvpFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& countDeathInPvp_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& CoolDownTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& coolDownTime_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& CountLoseStricSelectFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& countLoseStricSelect_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& LastLoseStricFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& lastLoseStric_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& CountLoseStricForCoolDownFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& countLoseStricForCoolDown_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& ActiveAFKLoseStricFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& activeAFKLoseStric_() {
		return *(R*)((uintptr_t)this + 0x4C);
	}
	template <typename R = int32_t> static R& TourneyCoolDownFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::TourneyCoolDownType*> R& tourneyCoolDown_() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& FirstClassFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& firstClass_() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> static R& CountBonusMailFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codec<Il2CppString*, int32_t>*& _map_countBonusMail_codec() {
		return *(Codec<Il2CppString*, int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 MapField2<Il2CppString*, int32_t>*& countBonusMail_() {
		return *(MapField2<Il2CppString*, int32_t>**)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> static R& PveResetTimeUnixFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& pveResetTimeUnix_() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> static R& PveCountResetFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& pveCountReset_() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = int32_t> static R& PveCoolDownTimeUnixFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& pveCoolDownTimeUnix_() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = int32_t> static R& LastBonusMailFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codec<Il2CppString*, int64_t>*& _map_lastBonusMail_codec() {
		return *(Codec<Il2CppString*, int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 MapField2<Il2CppString*, int64_t>*& lastBonusMail_() {
		return *(MapField2<Il2CppString*, int64_t>**)((uintptr_t)this + 0x80);
	}

	 static MessageParser1<ProtoModels::ListMapSlotEventUsageType*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ListMapSlotEventUsageType*>* (*)(void *))(Il2CppBase() + 0x142F2F0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x142F354))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F474))(this);
	}
	template <typename R = ProtoModels::ListMapSlotEventUsageType*> R Clone() {
		return ((R (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F804))(this);
	}
	 RepeatedField1<ProtoModels::MapSlotEventUsageType*>* get_Slot() {
		return ((RepeatedField1<ProtoModels::MapSlotEventUsageType*>* (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F860))(this);
	}
	 RepeatedField1<ProtoModels::MapSlotFirstIncomeType*>* get_FirstIncome() {
		return ((RepeatedField1<ProtoModels::MapSlotFirstIncomeType*>* (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F868))(this);
	}
	template <typename R = int64_t> R get_LastDeathInPvp() {
		return ((R (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F870))(this);
	}
	template <typename R = void> R set_LastDeathInPvp(int64_t value) {
		return ((R (*)(ListMapSlotEventUsageType*, int64_t))(Il2CppBase() + 0x142F878))(this, value);
	}
	template <typename R = int32_t> R get_CountDeathInPvp() {
		return ((R (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F880))(this);
	}
	template <typename R = void> R set_CountDeathInPvp(int32_t value) {
		return ((R (*)(ListMapSlotEventUsageType*, int32_t))(Il2CppBase() + 0x142F888))(this, value);
	}
	template <typename R = int64_t> R get_CoolDownTime() {
		return ((R (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F890))(this);
	}
	template <typename R = void> R set_CoolDownTime(int64_t value) {
		return ((R (*)(ListMapSlotEventUsageType*, int64_t))(Il2CppBase() + 0x142F898))(this, value);
	}
	template <typename R = int32_t> R get_CountLoseStricSelect() {
		return ((R (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F8A0))(this);
	}
	template <typename R = void> R set_CountLoseStricSelect(int32_t value) {
		return ((R (*)(ListMapSlotEventUsageType*, int32_t))(Il2CppBase() + 0x142F8A8))(this, value);
	}
	template <typename R = int64_t> R get_LastLoseStric() {
		return ((R (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F8B0))(this);
	}
	template <typename R = void> R set_LastLoseStric(int64_t value) {
		return ((R (*)(ListMapSlotEventUsageType*, int64_t))(Il2CppBase() + 0x142F8B8))(this, value);
	}
	template <typename R = int32_t> R get_CountLoseStricForCoolDown() {
		return ((R (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F8C0))(this);
	}
	template <typename R = void> R set_CountLoseStricForCoolDown(int32_t value) {
		return ((R (*)(ListMapSlotEventUsageType*, int32_t))(Il2CppBase() + 0x142F8C8))(this, value);
	}
	template <typename R = bool> R get_ActiveAFKLoseStric() {
		return ((R (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F8D0))(this);
	}
	template <typename R = void> R set_ActiveAFKLoseStric(bool value) {
		return ((R (*)(ListMapSlotEventUsageType*, bool))(Il2CppBase() + 0x142F8D8))(this, value);
	}
	template <typename R = ProtoModels::TourneyCoolDownType*> R get_TourneyCoolDown() {
		return ((R (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F8E4))(this);
	}
	template <typename R = void> R set_TourneyCoolDown(ProtoModels::TourneyCoolDownType* value) {
		return ((R (*)(ListMapSlotEventUsageType*, ProtoModels::TourneyCoolDownType*))(Il2CppBase() + 0x142F8EC))(this, value);
	}
	template <typename R = Il2CppString*> R get_FirstClass() {
		return ((R (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F8F4))(this);
	}
	template <typename R = void> R set_FirstClass(Il2CppString* value) {
		return ((R (*)(ListMapSlotEventUsageType*, Il2CppString*))(Il2CppBase() + 0x142F8FC))(this, value);
	}
	 MapField2<Il2CppString*, int32_t>* get_CountBonusMail() {
		return ((MapField2<Il2CppString*, int32_t>* (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F97C))(this);
	}
	template <typename R = int64_t> R get_PveResetTimeUnix() {
		return ((R (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F984))(this);
	}
	template <typename R = void> R set_PveResetTimeUnix(int64_t value) {
		return ((R (*)(ListMapSlotEventUsageType*, int64_t))(Il2CppBase() + 0x142F98C))(this, value);
	}
	template <typename R = int32_t> R get_PveCountReset() {
		return ((R (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F994))(this);
	}
	template <typename R = void> R set_PveCountReset(int32_t value) {
		return ((R (*)(ListMapSlotEventUsageType*, int32_t))(Il2CppBase() + 0x142F99C))(this, value);
	}
	template <typename R = int64_t> R get_PveCoolDownTimeUnix() {
		return ((R (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F9A4))(this);
	}
	template <typename R = void> R set_PveCoolDownTimeUnix(int64_t value) {
		return ((R (*)(ListMapSlotEventUsageType*, int64_t))(Il2CppBase() + 0x142F9AC))(this, value);
	}
	 MapField2<Il2CppString*, int64_t>* get_LastBonusMail() {
		return ((MapField2<Il2CppString*, int64_t>* (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142F9B4))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ListMapSlotEventUsageType*, Il2CppObject*))(Il2CppBase() + 0x142F9BC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ListMapSlotEventUsageType* other) {
		return ((R (*)(ListMapSlotEventUsageType*, ProtoModels::ListMapSlotEventUsageType*))(Il2CppBase() + 0x142FA2C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142FC14))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x142FE04))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ListMapSlotEventUsageType*, uintptr_t))(Il2CppBase() + 0x142FE68))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ListMapSlotEventUsageType*))(Il2CppBase() + 0x14301F4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ListMapSlotEventUsageType* other) {
		return ((R (*)(ListMapSlotEventUsageType*, ProtoModels::ListMapSlotEventUsageType*))(Il2CppBase() + 0x1430624))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ListMapSlotEventUsageType*, uintptr_t))(Il2CppBase() + 0x1430804))(this, input);
	}

};

}
