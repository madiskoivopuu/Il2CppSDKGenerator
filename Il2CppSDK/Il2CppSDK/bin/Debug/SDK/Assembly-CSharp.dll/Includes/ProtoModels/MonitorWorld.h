#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class MonitorWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "MonitorWorld"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IdFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& id_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ServerIdFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverId_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ArenaServerIdFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& arenaServerId_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& SLevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& sLevel_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& SavedFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& saved_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& ReadOnlyFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& readOnly_() {
		return *(T*)((uintptr_t)this + 0x39);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA9B64))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA9BC8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(MonitorWorld*))(Il2CppBase() + 0x1EA9CE8))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(MonitorWorld*))(Il2CppBase() + 0x1EA9E08))(this);
	}
	template <typename T = int64_t> T get_Id() {
		return ((T (*)(MonitorWorld*))(Il2CppBase() + 0x1EA9E64))(this);
	}
	template <typename T = void> T set_Id(int64_t value) {
		return ((T (*)(MonitorWorld*, int64_t))(Il2CppBase() + 0x1EA9E6C))(this, value);
	}
	template <typename T = int64_t> T get_ServerId() {
		return ((T (*)(MonitorWorld*))(Il2CppBase() + 0x1EA9E74))(this);
	}
	template <typename T = void> T set_ServerId(int64_t value) {
		return ((T (*)(MonitorWorld*, int64_t))(Il2CppBase() + 0x1EA9E7C))(this, value);
	}
	template <typename T = int64_t> T get_ArenaServerId() {
		return ((T (*)(MonitorWorld*))(Il2CppBase() + 0x1EA9E84))(this);
	}
	template <typename T = void> T set_ArenaServerId(int64_t value) {
		return ((T (*)(MonitorWorld*, int64_t))(Il2CppBase() + 0x1EA9E8C))(this, value);
	}
	template <typename T = uintptr_t> T get_SLevel() {
		return ((T (*)(MonitorWorld*))(Il2CppBase() + 0x1EA9E94))(this);
	}
	template <typename T = void> T set_SLevel(uintptr_t value) {
		return ((T (*)(MonitorWorld*, uintptr_t))(Il2CppBase() + 0x1EA9E9C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(MonitorWorld*))(Il2CppBase() + 0x1EA9EA4))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(MonitorWorld*, Il2CppString*))(Il2CppBase() + 0x1EA9EAC))(this, value);
	}
	template <typename T = bool> T get_Saved() {
		return ((T (*)(MonitorWorld*))(Il2CppBase() + 0x1EA9F2C))(this);
	}
	template <typename T = void> T set_Saved(bool value) {
		return ((T (*)(MonitorWorld*, bool))(Il2CppBase() + 0x1EA9F34))(this, value);
	}
	template <typename T = bool> T get_ReadOnly() {
		return ((T (*)(MonitorWorld*))(Il2CppBase() + 0x1EA9F40))(this);
	}
	template <typename T = void> T set_ReadOnly(bool value) {
		return ((T (*)(MonitorWorld*, bool))(Il2CppBase() + 0x1EA9F48))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(MonitorWorld*, uintptr_t))(Il2CppBase() + 0x1EA9F54))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(MonitorWorld*, uintptr_t))(Il2CppBase() + 0x1EA9FC4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(MonitorWorld*))(Il2CppBase() + 0x1EAA090))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MonitorWorld*))(Il2CppBase() + 0x1EAA1A0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(MonitorWorld*, uintptr_t))(Il2CppBase() + 0x1EAA204))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(MonitorWorld*))(Il2CppBase() + 0x1EAA36C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(MonitorWorld*, uintptr_t))(Il2CppBase() + 0x1EAA50C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(MonitorWorld*, uintptr_t))(Il2CppBase() + 0x1EAA594))(this, input);
	}

};

}
