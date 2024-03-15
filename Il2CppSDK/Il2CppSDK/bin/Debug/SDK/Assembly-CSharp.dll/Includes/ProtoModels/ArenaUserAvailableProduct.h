#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserAvailableProduct
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserAvailableProduct"));
	}

	 static MessageParser1<ProtoModels::ArenaUserAvailableProduct*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaUserAvailableProduct*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& iD_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& CountLeftFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& countLeft_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& VisibleFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& visible_() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> static R& ProductProgresFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::UserProductProgress*> R& productProgres_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& AvailabilityStartFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& availabilityStart_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& AvailabilityEndFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& availabilityEnd_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& ResetTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& resetTime_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& ActionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::AvailableProductAction> R& action_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& TotalExpFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint32_t> R& totalExp_() {
		return *(R*)((uintptr_t)this + 0x4C);
	}
	template <typename R = int32_t> static R& SlotsProgressFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::UserSlotsProgress*> R& slotsProgress_() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	 static MessageParser1<ProtoModels::ArenaUserAvailableProduct*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaUserAvailableProduct*>* (*)(void *))(Il2CppBase() + 0xF58DA4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xF58E08))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF58F28))(this);
	}
	template <typename R = ProtoModels::ArenaUserAvailableProduct*> R Clone() {
		return ((R (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF590B0))(this);
	}
	template <typename R = int32_t> R get_ID() {
		return ((R (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF5910C))(this);
	}
	template <typename R = void> R set_ID(int32_t value) {
		return ((R (*)(ArenaUserAvailableProduct*, int32_t))(Il2CppBase() + 0xF59114))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF5911C))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(ArenaUserAvailableProduct*, Il2CppString*))(Il2CppBase() + 0xF59124))(this, value);
	}
	template <typename R = int32_t> R get_CountLeft() {
		return ((R (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF591A4))(this);
	}
	template <typename R = void> R set_CountLeft(int32_t value) {
		return ((R (*)(ArenaUserAvailableProduct*, int32_t))(Il2CppBase() + 0xF591AC))(this, value);
	}
	template <typename R = bool> R get_Visible() {
		return ((R (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF591B4))(this);
	}
	template <typename R = void> R set_Visible(bool value) {
		return ((R (*)(ArenaUserAvailableProduct*, bool))(Il2CppBase() + 0xF591BC))(this, value);
	}
	template <typename R = ProtoModels::UserProductProgress*> R get_ProductProgres() {
		return ((R (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF591C8))(this);
	}
	template <typename R = void> R set_ProductProgres(ProtoModels::UserProductProgress* value) {
		return ((R (*)(ArenaUserAvailableProduct*, ProtoModels::UserProductProgress*))(Il2CppBase() + 0xF591D0))(this, value);
	}
	template <typename R = int64_t> R get_AvailabilityStart() {
		return ((R (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF591D8))(this);
	}
	template <typename R = void> R set_AvailabilityStart(int64_t value) {
		return ((R (*)(ArenaUserAvailableProduct*, int64_t))(Il2CppBase() + 0xF591E0))(this, value);
	}
	template <typename R = int64_t> R get_AvailabilityEnd() {
		return ((R (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF591E8))(this);
	}
	template <typename R = void> R set_AvailabilityEnd(int64_t value) {
		return ((R (*)(ArenaUserAvailableProduct*, int64_t))(Il2CppBase() + 0xF591F0))(this, value);
	}
	template <typename R = int64_t> R get_ResetTime() {
		return ((R (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF591F8))(this);
	}
	template <typename R = void> R set_ResetTime(int64_t value) {
		return ((R (*)(ArenaUserAvailableProduct*, int64_t))(Il2CppBase() + 0xF59200))(this, value);
	}
	template <typename R = ProtoModels::AvailableProductAction> R get_Action() {
		return ((R (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF59208))(this);
	}
	template <typename R = void> R set_Action(ProtoModels::AvailableProductAction value) {
		return ((R (*)(ArenaUserAvailableProduct*, ProtoModels::AvailableProductAction))(Il2CppBase() + 0xF59210))(this, value);
	}
	template <typename R = uint32_t> R get_TotalExp() {
		return ((R (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF59218))(this);
	}
	template <typename R = void> R set_TotalExp(uint32_t value) {
		return ((R (*)(ArenaUserAvailableProduct*, uint32_t))(Il2CppBase() + 0xF59220))(this, value);
	}
	template <typename R = ProtoModels::UserSlotsProgress*> R get_SlotsProgress() {
		return ((R (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF59228))(this);
	}
	template <typename R = void> R set_SlotsProgress(ProtoModels::UserSlotsProgress* value) {
		return ((R (*)(ArenaUserAvailableProduct*, ProtoModels::UserSlotsProgress*))(Il2CppBase() + 0xF59230))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUserAvailableProduct*, Il2CppObject*))(Il2CppBase() + 0xF59238))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUserAvailableProduct* other) {
		return ((R (*)(ArenaUserAvailableProduct*, ProtoModels::ArenaUserAvailableProduct*))(Il2CppBase() + 0xF592A8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF593B0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF59524))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUserAvailableProduct*, uintptr_t))(Il2CppBase() + 0xF59588))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF597A0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUserAvailableProduct* other) {
		return ((R (*)(ArenaUserAvailableProduct*, ProtoModels::ArenaUserAvailableProduct*))(Il2CppBase() + 0xF59A60))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUserAvailableProduct*, uintptr_t))(Il2CppBase() + 0xF59BE4))(this, input);
	}

};

}
