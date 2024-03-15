#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Dev2DevRequests
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Dev2DevRequests"));
	}

	 static MessageParser1<ProtoModels::Dev2DevRequests*>*& _parser() {
		return *(MessageParser1<ProtoModels::Dev2DevRequests*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& RequestsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::Dev2DevRequest*>*& _repeated_requests_codec() {
		return *(FieldCodec1<ProtoModels::Dev2DevRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::Dev2DevRequest*>*& requests_() {
		return *(RepeatedField1<ProtoModels::Dev2DevRequest*>**)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::Dev2DevRequests*>* get_Parser() {
		return ((MessageParser1<ProtoModels::Dev2DevRequests*>* (*)(void *))(Il2CppBase() + 0xEC0C44))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xEC0CA8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(Dev2DevRequests*))(Il2CppBase() + 0xEC0DC8))(this);
	}
	template <typename R = ProtoModels::Dev2DevRequests*> R Clone() {
		return ((R (*)(Dev2DevRequests*))(Il2CppBase() + 0xEC0F20))(this);
	}
	 RepeatedField1<ProtoModels::Dev2DevRequest*>* get_Requests() {
		return ((RepeatedField1<ProtoModels::Dev2DevRequest*>* (*)(Dev2DevRequests*))(Il2CppBase() + 0xEC0F7C))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(Dev2DevRequests*, Il2CppObject*))(Il2CppBase() + 0xEC0F84))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::Dev2DevRequests* other) {
		return ((R (*)(Dev2DevRequests*, ProtoModels::Dev2DevRequests*))(Il2CppBase() + 0xEC0FF4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(Dev2DevRequests*))(Il2CppBase() + 0xEC1080))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(Dev2DevRequests*))(Il2CppBase() + 0xEC10AC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(Dev2DevRequests*, uintptr_t))(Il2CppBase() + 0xEC1110))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(Dev2DevRequests*))(Il2CppBase() + 0xEC11B0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::Dev2DevRequests* other) {
		return ((R (*)(Dev2DevRequests*, ProtoModels::Dev2DevRequests*))(Il2CppBase() + 0xEC1240))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(Dev2DevRequests*, uintptr_t))(Il2CppBase() + 0xEC12B8))(this, input);
	}

};

}
