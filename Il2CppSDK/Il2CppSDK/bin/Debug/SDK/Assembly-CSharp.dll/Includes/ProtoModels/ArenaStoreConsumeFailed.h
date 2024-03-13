#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStoreConsumeFailed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStoreConsumeFailed"));
	}

	template <typename T = MessageParser1ArenaStoreConsumeFailed*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ResourcesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ArenaStoreResource*>*> static T& _repeated_resources_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1ArenaStoreResource*>*> T& resources_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ResoonFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ConsumeResourcesReason*> T& resoon_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& StoreDataNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& storeDataName_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = MessageParser1ArenaStoreConsumeFailed*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x271915C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x27191C0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaStoreConsumeFailed*))(Il2CppBase() + 0x27192E0))(this);
	}
	template <typename T = ArenaStoreConsumeFailed*> T Clone() {
		return ((T (*)(ArenaStoreConsumeFailed*))(Il2CppBase() + 0x2719484))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaStoreConsumeFailed*))(Il2CppBase() + 0x27194E0))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaStoreConsumeFailed*, int64_t))(Il2CppBase() + 0x27194E8))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaStoreConsumeFailed*))(Il2CppBase() + 0x27194F0))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaStoreConsumeFailed*, int64_t))(Il2CppBase() + 0x27194F8))(this, value);
	}
	template <typename T = RepeatedField1ArenaStoreResource*>*> T get_Resources() {
		return ((T (*)(ArenaStoreConsumeFailed*))(Il2CppBase() + 0x2719500))(this);
	}
	template <typename T = ConsumeResourcesReason*> T get_Resoon() {
		return ((T (*)(ArenaStoreConsumeFailed*))(Il2CppBase() + 0x2719508))(this);
	}
	template <typename T = void> T set_Resoon(ConsumeResourcesReason* value) {
		return ((T (*)(ArenaStoreConsumeFailed*, ConsumeResourcesReason*))(Il2CppBase() + 0x2719510))(this, value);
	}
	template <typename T = Il2CppString*> T get_StoreDataName() {
		return ((T (*)(ArenaStoreConsumeFailed*))(Il2CppBase() + 0x2719518))(this);
	}
	template <typename T = void> T set_StoreDataName(Il2CppString* value) {
		return ((T (*)(ArenaStoreConsumeFailed*, Il2CppString*))(Il2CppBase() + 0x2719520))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaStoreConsumeFailed*, Il2CppObject*))(Il2CppBase() + 0x27195A0))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaStoreConsumeFailed* other) {
		return ((T (*)(ArenaStoreConsumeFailed*, ArenaStoreConsumeFailed*))(Il2CppBase() + 0x2719610))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaStoreConsumeFailed*))(Il2CppBase() + 0x27196E0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaStoreConsumeFailed*))(Il2CppBase() + 0x27197A8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaStoreConsumeFailed*, uintptr_t))(Il2CppBase() + 0x271980C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaStoreConsumeFailed*))(Il2CppBase() + 0x2719974))(this);
	}
	template <typename T = void> T MergeFrom(ArenaStoreConsumeFailed* other) {
		return ((T (*)(ArenaStoreConsumeFailed*, ArenaStoreConsumeFailed*))(Il2CppBase() + 0x2719B20))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaStoreConsumeFailed*, uintptr_t))(Il2CppBase() + 0x2719BD4))(this, input);
	}

};

}
