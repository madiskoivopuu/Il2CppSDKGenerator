#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaClearCellInWorldRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaClearCellInWorldRequest"));
	}

	template <typename T = MessageParser1ArenaClearCellInWorldRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CellIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& cellID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& CallbackIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& callbackID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& KickUserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& kickUserID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& EmptyCellJsonFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& emptyCellJson_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = MessageParser1ArenaClearCellInWorldRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A1D5D4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A1D638))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaClearCellInWorldRequest*))(Il2CppBase() + 0x1A1D758))(this);
	}
	template <typename T = ArenaClearCellInWorldRequest*> T Clone() {
		return ((T (*)(ArenaClearCellInWorldRequest*))(Il2CppBase() + 0x1A1D864))(this);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaClearCellInWorldRequest*))(Il2CppBase() + 0x1A1D8C0))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaClearCellInWorldRequest*, int64_t))(Il2CppBase() + 0x1A1D8C8))(this, value);
	}
	template <typename T = int32_t> T get_CellID() {
		return ((T (*)(ArenaClearCellInWorldRequest*))(Il2CppBase() + 0x1A1D8D0))(this);
	}
	template <typename T = void> T set_CellID(int32_t value) {
		return ((T (*)(ArenaClearCellInWorldRequest*, int32_t))(Il2CppBase() + 0x1A1D8D8))(this, value);
	}
	template <typename T = int64_t> T get_CallbackID() {
		return ((T (*)(ArenaClearCellInWorldRequest*))(Il2CppBase() + 0x1A1D8E0))(this);
	}
	template <typename T = void> T set_CallbackID(int64_t value) {
		return ((T (*)(ArenaClearCellInWorldRequest*, int64_t))(Il2CppBase() + 0x1A1D8E8))(this, value);
	}
	template <typename T = int64_t> T get_KickUserID() {
		return ((T (*)(ArenaClearCellInWorldRequest*))(Il2CppBase() + 0x1A1D8F0))(this);
	}
	template <typename T = void> T set_KickUserID(int64_t value) {
		return ((T (*)(ArenaClearCellInWorldRequest*, int64_t))(Il2CppBase() + 0x1A1D8F8))(this, value);
	}
	template <typename T = Il2CppString*> T get_EmptyCellJson() {
		return ((T (*)(ArenaClearCellInWorldRequest*))(Il2CppBase() + 0x1A1D900))(this);
	}
	template <typename T = void> T set_EmptyCellJson(Il2CppString* value) {
		return ((T (*)(ArenaClearCellInWorldRequest*, Il2CppString*))(Il2CppBase() + 0x1A1D908))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaClearCellInWorldRequest*, Il2CppObject*))(Il2CppBase() + 0x1A1D988))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaClearCellInWorldRequest* other) {
		return ((T (*)(ArenaClearCellInWorldRequest*, ArenaClearCellInWorldRequest*))(Il2CppBase() + 0x1A1D9F8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaClearCellInWorldRequest*))(Il2CppBase() + 0x1A1DA7C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaClearCellInWorldRequest*))(Il2CppBase() + 0x1A1DB48))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaClearCellInWorldRequest*, uintptr_t))(Il2CppBase() + 0x1A1DBAC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaClearCellInWorldRequest*))(Il2CppBase() + 0x1A1DCBC))(this);
	}
	template <typename T = void> T MergeFrom(ArenaClearCellInWorldRequest* other) {
		return ((T (*)(ArenaClearCellInWorldRequest*, ArenaClearCellInWorldRequest*))(Il2CppBase() + 0x1A1DE38))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaClearCellInWorldRequest*, uintptr_t))(Il2CppBase() + 0x1A1DE90))(this, input);
	}

};

}
