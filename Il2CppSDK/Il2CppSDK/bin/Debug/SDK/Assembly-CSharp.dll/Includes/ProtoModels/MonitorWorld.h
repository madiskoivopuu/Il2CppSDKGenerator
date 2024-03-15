#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class MonitorWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "MonitorWorld"));
	}

	 static MessageParser1ProtoModels::MonitorWorld*>*& _parser() {
		return *(MessageParser1ProtoModels::MonitorWorld*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IdFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& id_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ServerIdFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverId_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ArenaServerIdFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& arenaServerId_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& SLevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ServerLevel*> R& sLevel_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& SavedFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& saved_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& ReadOnlyFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& readOnly_() {
		return *(R*)((uintptr_t)this + 0x39);
	}

	 static MessageParser1ProtoModels::MonitorWorld*>* get_Parser() {
		return ((MessageParser1ProtoModels::MonitorWorld*>* (*)(void *))(Il2CppBase() + 0x1EA9B64))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1EA9BC8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(MonitorWorld*))(Il2CppBase() + 0x1EA9CE8))(this);
	}
	template <typename R = ProtoModels::MonitorWorld*> R Clone() {
		return ((R (*)(MonitorWorld*))(Il2CppBase() + 0x1EA9E08))(this);
	}
	template <typename R = int64_t> R get_Id() {
		return ((R (*)(MonitorWorld*))(Il2CppBase() + 0x1EA9E64))(this);
	}
	template <typename R = void> R set_Id(int64_t value) {
		return ((R (*)(MonitorWorld*, int64_t))(Il2CppBase() + 0x1EA9E6C))(this, value);
	}
	template <typename R = int64_t> R get_ServerId() {
		return ((R (*)(MonitorWorld*))(Il2CppBase() + 0x1EA9E74))(this);
	}
	template <typename R = void> R set_ServerId(int64_t value) {
		return ((R (*)(MonitorWorld*, int64_t))(Il2CppBase() + 0x1EA9E7C))(this, value);
	}
	template <typename R = int64_t> R get_ArenaServerId() {
		return ((R (*)(MonitorWorld*))(Il2CppBase() + 0x1EA9E84))(this);
	}
	template <typename R = void> R set_ArenaServerId(int64_t value) {
		return ((R (*)(MonitorWorld*, int64_t))(Il2CppBase() + 0x1EA9E8C))(this, value);
	}
	template <typename R = ProtoModels::ServerLevel*> R get_SLevel() {
		return ((R (*)(MonitorWorld*))(Il2CppBase() + 0x1EA9E94))(this);
	}
	template <typename R = void> R set_SLevel(ProtoModels::ServerLevel* value) {
		return ((R (*)(MonitorWorld*, ProtoModels::ServerLevel*))(Il2CppBase() + 0x1EA9E9C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(MonitorWorld*))(Il2CppBase() + 0x1EA9EA4))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(MonitorWorld*, Il2CppString*))(Il2CppBase() + 0x1EA9EAC))(this, value);
	}
	template <typename R = bool> R get_Saved() {
		return ((R (*)(MonitorWorld*))(Il2CppBase() + 0x1EA9F2C))(this);
	}
	template <typename R = void> R set_Saved(bool value) {
		return ((R (*)(MonitorWorld*, bool))(Il2CppBase() + 0x1EA9F34))(this, value);
	}
	template <typename R = bool> R get_ReadOnly() {
		return ((R (*)(MonitorWorld*))(Il2CppBase() + 0x1EA9F40))(this);
	}
	template <typename R = void> R set_ReadOnly(bool value) {
		return ((R (*)(MonitorWorld*, bool))(Il2CppBase() + 0x1EA9F48))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(MonitorWorld*, Il2CppObject*))(Il2CppBase() + 0x1EA9F54))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::MonitorWorld* other) {
		return ((R (*)(MonitorWorld*, ProtoModels::MonitorWorld*))(Il2CppBase() + 0x1EA9FC4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(MonitorWorld*))(Il2CppBase() + 0x1EAA090))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(MonitorWorld*))(Il2CppBase() + 0x1EAA1A0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(MonitorWorld*, uintptr_t))(Il2CppBase() + 0x1EAA204))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(MonitorWorld*))(Il2CppBase() + 0x1EAA36C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::MonitorWorld* other) {
		return ((R (*)(MonitorWorld*, ProtoModels::MonitorWorld*))(Il2CppBase() + 0x1EAA50C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(MonitorWorld*, uintptr_t))(Il2CppBase() + 0x1EAA594))(this, input);
	}

};

}
