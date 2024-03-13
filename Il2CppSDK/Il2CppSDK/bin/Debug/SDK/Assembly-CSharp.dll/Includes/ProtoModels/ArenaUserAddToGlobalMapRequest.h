#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserAddToGlobalMapRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserAddToGlobalMapRequest"));
	}

	template <typename T = MessageParser1ArenaUserAddToGlobalMapRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& UserNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& userName_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& MapSlotFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& mapSlot_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& WasKilledFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& wasKilled_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = MessageParser1ArenaUserAddToGlobalMapRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xF582CC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xF58330))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUserAddToGlobalMapRequest*))(Il2CppBase() + 0xF58450))(this);
	}
	template <typename T = ArenaUserAddToGlobalMapRequest*> T Clone() {
		return ((T (*)(ArenaUserAddToGlobalMapRequest*))(Il2CppBase() + 0xF58560))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaUserAddToGlobalMapRequest*))(Il2CppBase() + 0xF585BC))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaUserAddToGlobalMapRequest*, int64_t))(Il2CppBase() + 0xF585C4))(this, value);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaUserAddToGlobalMapRequest*))(Il2CppBase() + 0xF585CC))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaUserAddToGlobalMapRequest*, int64_t))(Il2CppBase() + 0xF585D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_UserName() {
		return ((T (*)(ArenaUserAddToGlobalMapRequest*))(Il2CppBase() + 0xF585DC))(this);
	}
	template <typename T = void> T set_UserName(Il2CppString* value) {
		return ((T (*)(ArenaUserAddToGlobalMapRequest*, Il2CppString*))(Il2CppBase() + 0xF585E4))(this, value);
	}
	template <typename T = int64_t> T get_MapSlot() {
		return ((T (*)(ArenaUserAddToGlobalMapRequest*))(Il2CppBase() + 0xF58664))(this);
	}
	template <typename T = void> T set_MapSlot(int64_t value) {
		return ((T (*)(ArenaUserAddToGlobalMapRequest*, int64_t))(Il2CppBase() + 0xF5866C))(this, value);
	}
	template <typename T = bool> T get_WasKilled() {
		return ((T (*)(ArenaUserAddToGlobalMapRequest*))(Il2CppBase() + 0xF58674))(this);
	}
	template <typename T = void> T set_WasKilled(bool value) {
		return ((T (*)(ArenaUserAddToGlobalMapRequest*, bool))(Il2CppBase() + 0xF5867C))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaUserAddToGlobalMapRequest*, Il2CppObject*))(Il2CppBase() + 0xF58688))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaUserAddToGlobalMapRequest* other) {
		return ((T (*)(ArenaUserAddToGlobalMapRequest*, ArenaUserAddToGlobalMapRequest*))(Il2CppBase() + 0xF586F8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUserAddToGlobalMapRequest*))(Il2CppBase() + 0xF58794))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUserAddToGlobalMapRequest*))(Il2CppBase() + 0xF58864))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUserAddToGlobalMapRequest*, uintptr_t))(Il2CppBase() + 0xF588C8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUserAddToGlobalMapRequest*))(Il2CppBase() + 0xF589D8))(this);
	}
	template <typename T = void> T MergeFrom(ArenaUserAddToGlobalMapRequest* other) {
		return ((T (*)(ArenaUserAddToGlobalMapRequest*, ArenaUserAddToGlobalMapRequest*))(Il2CppBase() + 0xF58B2C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUserAddToGlobalMapRequest*, uintptr_t))(Il2CppBase() + 0xF58B9C))(this, input);
	}

};

}
