#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStoreConsumeFailed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStoreConsumeFailed"));
	}

	 static MessageParser1<ProtoModels::ArenaStoreConsumeFailed*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaStoreConsumeFailed*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ResourcesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::ArenaStoreResource*>*& _repeated_resources_codec() {
		return *(FieldCodec1<ProtoModels::ArenaStoreResource*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::ArenaStoreResource*>*& resources_() {
		return *(RepeatedField1<ProtoModels::ArenaStoreResource*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ResoonFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ConsumeResourcesReason> R& resoon_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& StoreDataNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& storeDataName_() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 static MessageParser1<ProtoModels::ArenaStoreConsumeFailed*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaStoreConsumeFailed*>* (*)(void *))(Il2CppBase() + 0x271915C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x27191C0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaStoreConsumeFailed*))(Il2CppBase() + 0x27192E0))(this);
	}
	template <typename R = ProtoModels::ArenaStoreConsumeFailed*> R Clone() {
		return ((R (*)(ArenaStoreConsumeFailed*))(Il2CppBase() + 0x2719484))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaStoreConsumeFailed*))(Il2CppBase() + 0x27194E0))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaStoreConsumeFailed*, int64_t))(Il2CppBase() + 0x27194E8))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaStoreConsumeFailed*))(Il2CppBase() + 0x27194F0))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaStoreConsumeFailed*, int64_t))(Il2CppBase() + 0x27194F8))(this, value);
	}
	 RepeatedField1<ProtoModels::ArenaStoreResource*>* get_Resources() {
		return ((RepeatedField1<ProtoModels::ArenaStoreResource*>* (*)(ArenaStoreConsumeFailed*))(Il2CppBase() + 0x2719500))(this);
	}
	template <typename R = ProtoModels::ConsumeResourcesReason> R get_Resoon() {
		return ((R (*)(ArenaStoreConsumeFailed*))(Il2CppBase() + 0x2719508))(this);
	}
	template <typename R = void> R set_Resoon(ProtoModels::ConsumeResourcesReason value) {
		return ((R (*)(ArenaStoreConsumeFailed*, ProtoModels::ConsumeResourcesReason))(Il2CppBase() + 0x2719510))(this, value);
	}
	template <typename R = Il2CppString*> R get_StoreDataName() {
		return ((R (*)(ArenaStoreConsumeFailed*))(Il2CppBase() + 0x2719518))(this);
	}
	template <typename R = void> R set_StoreDataName(Il2CppString* value) {
		return ((R (*)(ArenaStoreConsumeFailed*, Il2CppString*))(Il2CppBase() + 0x2719520))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaStoreConsumeFailed*, Il2CppObject*))(Il2CppBase() + 0x27195A0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaStoreConsumeFailed* other) {
		return ((R (*)(ArenaStoreConsumeFailed*, ProtoModels::ArenaStoreConsumeFailed*))(Il2CppBase() + 0x2719610))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaStoreConsumeFailed*))(Il2CppBase() + 0x27196E0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaStoreConsumeFailed*))(Il2CppBase() + 0x27197A8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaStoreConsumeFailed*, uintptr_t))(Il2CppBase() + 0x271980C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaStoreConsumeFailed*))(Il2CppBase() + 0x2719974))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaStoreConsumeFailed* other) {
		return ((R (*)(ArenaStoreConsumeFailed*, ProtoModels::ArenaStoreConsumeFailed*))(Il2CppBase() + 0x2719B20))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaStoreConsumeFailed*, uintptr_t))(Il2CppBase() + 0x2719BD4))(this, input);
	}

};

}
