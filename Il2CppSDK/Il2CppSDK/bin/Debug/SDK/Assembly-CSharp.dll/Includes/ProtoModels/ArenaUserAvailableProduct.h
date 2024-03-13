#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserAvailableProduct
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserAvailableProduct"));
	}

	template <typename T = MessageParser1ArenaUserAvailableProduct*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& iD_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& CountLeftFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& countLeft_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& VisibleFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& visible_() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& ProductProgresFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = UserProductProgress*> T& productProgres_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& AvailabilityStartFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& availabilityStart_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& AvailabilityEndFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& availabilityEnd_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& ResetTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& resetTime_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& ActionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = AvailableProductAction*> T& action_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& TotalExpFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> T& totalExp_() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> static T& SlotsProgressFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = UserSlotsProgress*> T& slotsProgress_() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = MessageParser1ArenaUserAvailableProduct*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xF58DA4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xF58E08))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF58F28))(this);
	}
	template <typename T = ArenaUserAvailableProduct*> T Clone() {
		return ((T (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF590B0))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF5910C))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(ArenaUserAvailableProduct*, int32_t))(Il2CppBase() + 0xF59114))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF5911C))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(ArenaUserAvailableProduct*, Il2CppString*))(Il2CppBase() + 0xF59124))(this, value);
	}
	template <typename T = int32_t> T get_CountLeft() {
		return ((T (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF591A4))(this);
	}
	template <typename T = void> T set_CountLeft(int32_t value) {
		return ((T (*)(ArenaUserAvailableProduct*, int32_t))(Il2CppBase() + 0xF591AC))(this, value);
	}
	template <typename T = bool> T get_Visible() {
		return ((T (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF591B4))(this);
	}
	template <typename T = void> T set_Visible(bool value) {
		return ((T (*)(ArenaUserAvailableProduct*, bool))(Il2CppBase() + 0xF591BC))(this, value);
	}
	template <typename T = UserProductProgress*> T get_ProductProgres() {
		return ((T (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF591C8))(this);
	}
	template <typename T = void> T set_ProductProgres(UserProductProgress* value) {
		return ((T (*)(ArenaUserAvailableProduct*, UserProductProgress*))(Il2CppBase() + 0xF591D0))(this, value);
	}
	template <typename T = int64_t> T get_AvailabilityStart() {
		return ((T (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF591D8))(this);
	}
	template <typename T = void> T set_AvailabilityStart(int64_t value) {
		return ((T (*)(ArenaUserAvailableProduct*, int64_t))(Il2CppBase() + 0xF591E0))(this, value);
	}
	template <typename T = int64_t> T get_AvailabilityEnd() {
		return ((T (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF591E8))(this);
	}
	template <typename T = void> T set_AvailabilityEnd(int64_t value) {
		return ((T (*)(ArenaUserAvailableProduct*, int64_t))(Il2CppBase() + 0xF591F0))(this, value);
	}
	template <typename T = int64_t> T get_ResetTime() {
		return ((T (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF591F8))(this);
	}
	template <typename T = void> T set_ResetTime(int64_t value) {
		return ((T (*)(ArenaUserAvailableProduct*, int64_t))(Il2CppBase() + 0xF59200))(this, value);
	}
	template <typename T = AvailableProductAction*> T get_Action() {
		return ((T (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF59208))(this);
	}
	template <typename T = void> T set_Action(AvailableProductAction* value) {
		return ((T (*)(ArenaUserAvailableProduct*, AvailableProductAction*))(Il2CppBase() + 0xF59210))(this, value);
	}
	template <typename T = uint32_t> T get_TotalExp() {
		return ((T (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF59218))(this);
	}
	template <typename T = void> T set_TotalExp(uint32_t value) {
		return ((T (*)(ArenaUserAvailableProduct*, uint32_t))(Il2CppBase() + 0xF59220))(this, value);
	}
	template <typename T = UserSlotsProgress*> T get_SlotsProgress() {
		return ((T (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF59228))(this);
	}
	template <typename T = void> T set_SlotsProgress(UserSlotsProgress* value) {
		return ((T (*)(ArenaUserAvailableProduct*, UserSlotsProgress*))(Il2CppBase() + 0xF59230))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaUserAvailableProduct*, Il2CppObject*))(Il2CppBase() + 0xF59238))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaUserAvailableProduct* other) {
		return ((T (*)(ArenaUserAvailableProduct*, ArenaUserAvailableProduct*))(Il2CppBase() + 0xF592A8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF593B0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF59524))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUserAvailableProduct*, uintptr_t))(Il2CppBase() + 0xF59588))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUserAvailableProduct*))(Il2CppBase() + 0xF597A0))(this);
	}
	template <typename T = void> T MergeFrom(ArenaUserAvailableProduct* other) {
		return ((T (*)(ArenaUserAvailableProduct*, ArenaUserAvailableProduct*))(Il2CppBase() + 0xF59A60))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUserAvailableProduct*, uintptr_t))(Il2CppBase() + 0xF59BE4))(this, input);
	}

};

}
