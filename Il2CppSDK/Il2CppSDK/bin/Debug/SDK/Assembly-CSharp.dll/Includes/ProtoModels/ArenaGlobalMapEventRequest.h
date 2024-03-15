#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaGlobalMapEventRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaGlobalMapEventRequest"));
	}

	 static MessageParser1<ProtoModels::ArenaGlobalMapEventRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaGlobalMapEventRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& TargetSlotFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& targetSlot_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& EnergyLeftFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& energyLeft_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& UserStartMoveFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& userStartMove_() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = int32_t> static R& UserLevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& userLevel_() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	 static MessageParser1<ProtoModels::ArenaGlobalMapEventRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaGlobalMapEventRequest*>* (*)(void *))(Il2CppBase() + 0x1E26FAC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E27010))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E27130))(this);
	}
	template <typename R = ProtoModels::ArenaGlobalMapEventRequest*> R Clone() {
		return ((R (*)(ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E27250))(this);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E272AC))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(ArenaGlobalMapEventRequest*, int64_t))(Il2CppBase() + 0x1E272B4))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E272BC))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaGlobalMapEventRequest*, int64_t))(Il2CppBase() + 0x1E272C4))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E272CC))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaGlobalMapEventRequest*, int64_t))(Il2CppBase() + 0x1E272D4))(this, value);
	}
	template <typename R = Il2CppString*> R get_TargetSlot() {
		return ((R (*)(ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E272DC))(this);
	}
	template <typename R = void> R set_TargetSlot(Il2CppString* value) {
		return ((R (*)(ArenaGlobalMapEventRequest*, Il2CppString*))(Il2CppBase() + 0x1E272E4))(this, value);
	}
	template <typename R = int32_t> R get_EnergyLeft() {
		return ((R (*)(ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E27364))(this);
	}
	template <typename R = void> R set_EnergyLeft(int32_t value) {
		return ((R (*)(ArenaGlobalMapEventRequest*, int32_t))(Il2CppBase() + 0x1E2736C))(this, value);
	}
	template <typename R = bool> R get_UserStartMove() {
		return ((R (*)(ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E27374))(this);
	}
	template <typename R = void> R set_UserStartMove(bool value) {
		return ((R (*)(ArenaGlobalMapEventRequest*, bool))(Il2CppBase() + 0x1E2737C))(this, value);
	}
	template <typename R = int32_t> R get_UserLevel() {
		return ((R (*)(ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E27388))(this);
	}
	template <typename R = void> R set_UserLevel(int32_t value) {
		return ((R (*)(ArenaGlobalMapEventRequest*, int32_t))(Il2CppBase() + 0x1E27390))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaGlobalMapEventRequest*, Il2CppObject*))(Il2CppBase() + 0x1E27398))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaGlobalMapEventRequest* other) {
		return ((R (*)(ArenaGlobalMapEventRequest*, ProtoModels::ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E27408))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E274C8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E275D4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaGlobalMapEventRequest*, uintptr_t))(Il2CppBase() + 0x1E27638))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E277A0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaGlobalMapEventRequest* other) {
		return ((R (*)(ArenaGlobalMapEventRequest*, ProtoModels::ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E27970))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaGlobalMapEventRequest*, uintptr_t))(Il2CppBase() + 0x1E279F8))(this, input);
	}

};

}
