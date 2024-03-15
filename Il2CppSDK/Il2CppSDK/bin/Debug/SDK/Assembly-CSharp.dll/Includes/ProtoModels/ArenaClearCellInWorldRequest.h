#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaClearCellInWorldRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaClearCellInWorldRequest"));
	}

	 static MessageParser1ProtoModels::ArenaClearCellInWorldRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaClearCellInWorldRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CellIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& cellID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& CallbackIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& callbackID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& KickUserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& kickUserID_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& EmptyCellJsonFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& emptyCellJson_() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 static MessageParser1ProtoModels::ArenaClearCellInWorldRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaClearCellInWorldRequest*>* (*)(void *))(Il2CppBase() + 0x1A1D5D4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A1D638))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaClearCellInWorldRequest*))(Il2CppBase() + 0x1A1D758))(this);
	}
	template <typename R = ProtoModels::ArenaClearCellInWorldRequest*> R Clone() {
		return ((R (*)(ArenaClearCellInWorldRequest*))(Il2CppBase() + 0x1A1D864))(this);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(ArenaClearCellInWorldRequest*))(Il2CppBase() + 0x1A1D8C0))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(ArenaClearCellInWorldRequest*, int64_t))(Il2CppBase() + 0x1A1D8C8))(this, value);
	}
	template <typename R = int32_t> R get_CellID() {
		return ((R (*)(ArenaClearCellInWorldRequest*))(Il2CppBase() + 0x1A1D8D0))(this);
	}
	template <typename R = void> R set_CellID(int32_t value) {
		return ((R (*)(ArenaClearCellInWorldRequest*, int32_t))(Il2CppBase() + 0x1A1D8D8))(this, value);
	}
	template <typename R = int64_t> R get_CallbackID() {
		return ((R (*)(ArenaClearCellInWorldRequest*))(Il2CppBase() + 0x1A1D8E0))(this);
	}
	template <typename R = void> R set_CallbackID(int64_t value) {
		return ((R (*)(ArenaClearCellInWorldRequest*, int64_t))(Il2CppBase() + 0x1A1D8E8))(this, value);
	}
	template <typename R = int64_t> R get_KickUserID() {
		return ((R (*)(ArenaClearCellInWorldRequest*))(Il2CppBase() + 0x1A1D8F0))(this);
	}
	template <typename R = void> R set_KickUserID(int64_t value) {
		return ((R (*)(ArenaClearCellInWorldRequest*, int64_t))(Il2CppBase() + 0x1A1D8F8))(this, value);
	}
	template <typename R = Il2CppString*> R get_EmptyCellJson() {
		return ((R (*)(ArenaClearCellInWorldRequest*))(Il2CppBase() + 0x1A1D900))(this);
	}
	template <typename R = void> R set_EmptyCellJson(Il2CppString* value) {
		return ((R (*)(ArenaClearCellInWorldRequest*, Il2CppString*))(Il2CppBase() + 0x1A1D908))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaClearCellInWorldRequest*, Il2CppObject*))(Il2CppBase() + 0x1A1D988))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaClearCellInWorldRequest* other) {
		return ((R (*)(ArenaClearCellInWorldRequest*, ProtoModels::ArenaClearCellInWorldRequest*))(Il2CppBase() + 0x1A1D9F8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaClearCellInWorldRequest*))(Il2CppBase() + 0x1A1DA7C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaClearCellInWorldRequest*))(Il2CppBase() + 0x1A1DB48))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaClearCellInWorldRequest*, uintptr_t))(Il2CppBase() + 0x1A1DBAC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaClearCellInWorldRequest*))(Il2CppBase() + 0x1A1DCBC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaClearCellInWorldRequest* other) {
		return ((R (*)(ArenaClearCellInWorldRequest*, ProtoModels::ArenaClearCellInWorldRequest*))(Il2CppBase() + 0x1A1DE38))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaClearCellInWorldRequest*, uintptr_t))(Il2CppBase() + 0x1A1DE90))(this, input);
	}

};

}
