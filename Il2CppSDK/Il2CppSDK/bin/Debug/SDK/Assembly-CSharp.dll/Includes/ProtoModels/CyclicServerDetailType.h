#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CyclicServerDetailType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CyclicServerDetailType"));
	}

	 static MessageParser1ProtoModels::CyclicServerDetailType*>*& _parser() {
		return *(MessageParser1ProtoModels::CyclicServerDetailType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& RegionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& region_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UrlFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& url_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::CyclicServerDetailType*>* get_Parser() {
		return ((MessageParser1ProtoModels::CyclicServerDetailType*>* (*)(void *))(Il2CppBase() + 0x1646564))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x16465C8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(CyclicServerDetailType*))(Il2CppBase() + 0x16466E8))(this);
	}
	template <typename R = ProtoModels::CyclicServerDetailType*> R Clone() {
		return ((R (*)(CyclicServerDetailType*))(Il2CppBase() + 0x16467F4))(this);
	}
	template <typename R = Il2CppString*> R get_Region() {
		return ((R (*)(CyclicServerDetailType*))(Il2CppBase() + 0x1646850))(this);
	}
	template <typename R = void> R set_Region(Il2CppString* value) {
		return ((R (*)(CyclicServerDetailType*, Il2CppString*))(Il2CppBase() + 0x1646858))(this, value);
	}
	template <typename R = Il2CppString*> R get_Url() {
		return ((R (*)(CyclicServerDetailType*))(Il2CppBase() + 0x16468D8))(this);
	}
	template <typename R = void> R set_Url(Il2CppString* value) {
		return ((R (*)(CyclicServerDetailType*, Il2CppString*))(Il2CppBase() + 0x16468E0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(CyclicServerDetailType*, Il2CppObject*))(Il2CppBase() + 0x1646960))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::CyclicServerDetailType* other) {
		return ((R (*)(CyclicServerDetailType*, ProtoModels::CyclicServerDetailType*))(Il2CppBase() + 0x16469D0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(CyclicServerDetailType*))(Il2CppBase() + 0x1646A38))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(CyclicServerDetailType*))(Il2CppBase() + 0x1646AA4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(CyclicServerDetailType*, uintptr_t))(Il2CppBase() + 0x1646B08))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(CyclicServerDetailType*))(Il2CppBase() + 0x1646B9C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::CyclicServerDetailType* other) {
		return ((R (*)(CyclicServerDetailType*, ProtoModels::CyclicServerDetailType*))(Il2CppBase() + 0x1646C6C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(CyclicServerDetailType*, uintptr_t))(Il2CppBase() + 0x1646CCC))(this, input);
	}

};

}
