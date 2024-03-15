#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ClientConfigurationItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ClientConfigurationItem"));
	}

	 static MessageParser1<ProtoModels::ClientConfigurationItem*>*& _parser() {
		return *(MessageParser1<ProtoModels::ClientConfigurationItem*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& TypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ClientConfigurationType> R& type_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& VersionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& version_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::ClientConfigurationItem*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ClientConfigurationItem*>* (*)(void *))(Il2CppBase() + 0xE1719C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xE17200))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ClientConfigurationItem*))(Il2CppBase() + 0xE17320))(this);
	}
	template <typename R = ProtoModels::ClientConfigurationItem*> R Clone() {
		return ((R (*)(ClientConfigurationItem*))(Il2CppBase() + 0xE16964))(this);
	}
	template <typename R = ProtoModels::ClientConfigurationType> R get_Type() {
		return ((R (*)(ClientConfigurationItem*))(Il2CppBase() + 0xE173B8))(this);
	}
	template <typename R = void> R set_Type(ProtoModels::ClientConfigurationType value) {
		return ((R (*)(ClientConfigurationItem*, ProtoModels::ClientConfigurationType))(Il2CppBase() + 0xE173C0))(this, value);
	}
	template <typename R = int64_t> R get_Version() {
		return ((R (*)(ClientConfigurationItem*))(Il2CppBase() + 0xE173C8))(this);
	}
	template <typename R = void> R set_Version(int64_t value) {
		return ((R (*)(ClientConfigurationItem*, int64_t))(Il2CppBase() + 0xE173D0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ClientConfigurationItem*, Il2CppObject*))(Il2CppBase() + 0xE173D8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ClientConfigurationItem* other) {
		return ((R (*)(ClientConfigurationItem*, ProtoModels::ClientConfigurationItem*))(Il2CppBase() + 0xE17474))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ClientConfigurationItem*))(Il2CppBase() + 0xE174B4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ClientConfigurationItem*))(Il2CppBase() + 0xE17524))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ClientConfigurationItem*, uintptr_t))(Il2CppBase() + 0xE17588))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ClientConfigurationItem*))(Il2CppBase() + 0xE1760C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ClientConfigurationItem* other) {
		return ((R (*)(ClientConfigurationItem*, ProtoModels::ClientConfigurationItem*))(Il2CppBase() + 0xE16F48))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ClientConfigurationItem*, uintptr_t))(Il2CppBase() + 0xE176C0))(this, input);
	}

};

}
