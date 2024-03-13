#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaGlobalMapEventRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaGlobalMapEventRequest"));
	}

	template <typename T = MessageParser1ArenaGlobalMapEventRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& TargetSlotFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& targetSlot_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& EnergyLeftFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& energyLeft_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& UserStartMoveFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& userStartMove_() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> static T& UserLevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& userLevel_() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = MessageParser1ArenaGlobalMapEventRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E26FAC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E27010))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E27130))(this);
	}
	template <typename T = ArenaGlobalMapEventRequest*> T Clone() {
		return ((T (*)(ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E27250))(this);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E272AC))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaGlobalMapEventRequest*, int64_t))(Il2CppBase() + 0x1E272B4))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E272BC))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaGlobalMapEventRequest*, int64_t))(Il2CppBase() + 0x1E272C4))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E272CC))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaGlobalMapEventRequest*, int64_t))(Il2CppBase() + 0x1E272D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_TargetSlot() {
		return ((T (*)(ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E272DC))(this);
	}
	template <typename T = void> T set_TargetSlot(Il2CppString* value) {
		return ((T (*)(ArenaGlobalMapEventRequest*, Il2CppString*))(Il2CppBase() + 0x1E272E4))(this, value);
	}
	template <typename T = int32_t> T get_EnergyLeft() {
		return ((T (*)(ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E27364))(this);
	}
	template <typename T = void> T set_EnergyLeft(int32_t value) {
		return ((T (*)(ArenaGlobalMapEventRequest*, int32_t))(Il2CppBase() + 0x1E2736C))(this, value);
	}
	template <typename T = bool> T get_UserStartMove() {
		return ((T (*)(ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E27374))(this);
	}
	template <typename T = void> T set_UserStartMove(bool value) {
		return ((T (*)(ArenaGlobalMapEventRequest*, bool))(Il2CppBase() + 0x1E2737C))(this, value);
	}
	template <typename T = int32_t> T get_UserLevel() {
		return ((T (*)(ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E27388))(this);
	}
	template <typename T = void> T set_UserLevel(int32_t value) {
		return ((T (*)(ArenaGlobalMapEventRequest*, int32_t))(Il2CppBase() + 0x1E27390))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaGlobalMapEventRequest*, Il2CppObject*))(Il2CppBase() + 0x1E27398))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaGlobalMapEventRequest* other) {
		return ((T (*)(ArenaGlobalMapEventRequest*, ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E27408))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E274C8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E275D4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaGlobalMapEventRequest*, uintptr_t))(Il2CppBase() + 0x1E27638))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E277A0))(this);
	}
	template <typename T = void> T MergeFrom(ArenaGlobalMapEventRequest* other) {
		return ((T (*)(ArenaGlobalMapEventRequest*, ArenaGlobalMapEventRequest*))(Il2CppBase() + 0x1E27970))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaGlobalMapEventRequest*, uintptr_t))(Il2CppBase() + 0x1E279F8))(this, input);
	}

};

}
