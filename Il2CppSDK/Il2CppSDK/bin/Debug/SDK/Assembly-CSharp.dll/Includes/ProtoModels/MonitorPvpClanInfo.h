#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class MonitorPvpClanInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "MonitorPvpClanInfo"));
	}

	 static MessageParser1<ProtoModels::MonitorPvpClanInfo*>*& _parser() {
		return *(MessageParser1<ProtoModels::MonitorPvpClanInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IdFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& id_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& FakeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& fake_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::MonitorPvpClanInfo*>* get_Parser() {
		return ((MessageParser1<ProtoModels::MonitorPvpClanInfo*>* (*)(void *))(Il2CppBase() + 0x1EA717C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1EA71E0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(MonitorPvpClanInfo*))(Il2CppBase() + 0x1EA7300))(this);
	}
	template <typename R = ProtoModels::MonitorPvpClanInfo*> R Clone() {
		return ((R (*)(MonitorPvpClanInfo*))(Il2CppBase() + 0x1EA7400))(this);
	}
	template <typename R = int64_t> R get_Id() {
		return ((R (*)(MonitorPvpClanInfo*))(Il2CppBase() + 0x1EA745C))(this);
	}
	template <typename R = void> R set_Id(int64_t value) {
		return ((R (*)(MonitorPvpClanInfo*, int64_t))(Il2CppBase() + 0x1EA7464))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(MonitorPvpClanInfo*))(Il2CppBase() + 0x1EA746C))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(MonitorPvpClanInfo*, Il2CppString*))(Il2CppBase() + 0x1EA7474))(this, value);
	}
	template <typename R = bool> R get_Fake() {
		return ((R (*)(MonitorPvpClanInfo*))(Il2CppBase() + 0x1EA74F4))(this);
	}
	template <typename R = void> R set_Fake(bool value) {
		return ((R (*)(MonitorPvpClanInfo*, bool))(Il2CppBase() + 0x1EA74FC))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(MonitorPvpClanInfo*, Il2CppObject*))(Il2CppBase() + 0x1EA7508))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::MonitorPvpClanInfo* other) {
		return ((R (*)(MonitorPvpClanInfo*, ProtoModels::MonitorPvpClanInfo*))(Il2CppBase() + 0x1EA7578))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(MonitorPvpClanInfo*))(Il2CppBase() + 0x1EA75F4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(MonitorPvpClanInfo*))(Il2CppBase() + 0x1EA768C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(MonitorPvpClanInfo*, uintptr_t))(Il2CppBase() + 0x1EA76F0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(MonitorPvpClanInfo*))(Il2CppBase() + 0x1EA77A8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::MonitorPvpClanInfo* other) {
		return ((R (*)(MonitorPvpClanInfo*, ProtoModels::MonitorPvpClanInfo*))(Il2CppBase() + 0x1EA7884))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(MonitorPvpClanInfo*, uintptr_t))(Il2CppBase() + 0x1EA78DC))(this, input);
	}

};

}
