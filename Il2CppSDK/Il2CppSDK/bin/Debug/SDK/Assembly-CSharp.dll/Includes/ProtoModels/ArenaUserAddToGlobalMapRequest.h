#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserAddToGlobalMapRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserAddToGlobalMapRequest"));
	}

	 static MessageParser1<ProtoModels::ArenaUserAddToGlobalMapRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaUserAddToGlobalMapRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& UserNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& userName_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& MapSlotFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& mapSlot_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& WasKilledFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& wasKilled_() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 static MessageParser1<ProtoModels::ArenaUserAddToGlobalMapRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaUserAddToGlobalMapRequest*>* (*)(void *))(Il2CppBase() + 0xF582CC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xF58330))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUserAddToGlobalMapRequest*))(Il2CppBase() + 0xF58450))(this);
	}
	template <typename R = ProtoModels::ArenaUserAddToGlobalMapRequest*> R Clone() {
		return ((R (*)(ArenaUserAddToGlobalMapRequest*))(Il2CppBase() + 0xF58560))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaUserAddToGlobalMapRequest*))(Il2CppBase() + 0xF585BC))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaUserAddToGlobalMapRequest*, int64_t))(Il2CppBase() + 0xF585C4))(this, value);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(ArenaUserAddToGlobalMapRequest*))(Il2CppBase() + 0xF585CC))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(ArenaUserAddToGlobalMapRequest*, int64_t))(Il2CppBase() + 0xF585D4))(this, value);
	}
	template <typename R = Il2CppString*> R get_UserName() {
		return ((R (*)(ArenaUserAddToGlobalMapRequest*))(Il2CppBase() + 0xF585DC))(this);
	}
	template <typename R = void> R set_UserName(Il2CppString* value) {
		return ((R (*)(ArenaUserAddToGlobalMapRequest*, Il2CppString*))(Il2CppBase() + 0xF585E4))(this, value);
	}
	template <typename R = int64_t> R get_MapSlot() {
		return ((R (*)(ArenaUserAddToGlobalMapRequest*))(Il2CppBase() + 0xF58664))(this);
	}
	template <typename R = void> R set_MapSlot(int64_t value) {
		return ((R (*)(ArenaUserAddToGlobalMapRequest*, int64_t))(Il2CppBase() + 0xF5866C))(this, value);
	}
	template <typename R = bool> R get_WasKilled() {
		return ((R (*)(ArenaUserAddToGlobalMapRequest*))(Il2CppBase() + 0xF58674))(this);
	}
	template <typename R = void> R set_WasKilled(bool value) {
		return ((R (*)(ArenaUserAddToGlobalMapRequest*, bool))(Il2CppBase() + 0xF5867C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUserAddToGlobalMapRequest*, Il2CppObject*))(Il2CppBase() + 0xF58688))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUserAddToGlobalMapRequest* other) {
		return ((R (*)(ArenaUserAddToGlobalMapRequest*, ProtoModels::ArenaUserAddToGlobalMapRequest*))(Il2CppBase() + 0xF586F8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUserAddToGlobalMapRequest*))(Il2CppBase() + 0xF58794))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUserAddToGlobalMapRequest*))(Il2CppBase() + 0xF58864))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUserAddToGlobalMapRequest*, uintptr_t))(Il2CppBase() + 0xF588C8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUserAddToGlobalMapRequest*))(Il2CppBase() + 0xF589D8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUserAddToGlobalMapRequest* other) {
		return ((R (*)(ArenaUserAddToGlobalMapRequest*, ProtoModels::ArenaUserAddToGlobalMapRequest*))(Il2CppBase() + 0xF58B2C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUserAddToGlobalMapRequest*, uintptr_t))(Il2CppBase() + 0xF58B9C))(this, input);
	}

};

}
