#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class MonitorPvpClanInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "MonitorPvpClanInfo"));
	}

	template <typename T = MessageParser1MonitorPvpClanInfo*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IdFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& id_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& FakeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& fake_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1MonitorPvpClanInfo*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA717C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA71E0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(MonitorPvpClanInfo*))(Il2CppBase() + 0x1EA7300))(this);
	}
	template <typename T = MonitorPvpClanInfo*> T Clone() {
		return ((T (*)(MonitorPvpClanInfo*))(Il2CppBase() + 0x1EA7400))(this);
	}
	template <typename T = int64_t> T get_Id() {
		return ((T (*)(MonitorPvpClanInfo*))(Il2CppBase() + 0x1EA745C))(this);
	}
	template <typename T = void> T set_Id(int64_t value) {
		return ((T (*)(MonitorPvpClanInfo*, int64_t))(Il2CppBase() + 0x1EA7464))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(MonitorPvpClanInfo*))(Il2CppBase() + 0x1EA746C))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(MonitorPvpClanInfo*, Il2CppString*))(Il2CppBase() + 0x1EA7474))(this, value);
	}
	template <typename T = bool> T get_Fake() {
		return ((T (*)(MonitorPvpClanInfo*))(Il2CppBase() + 0x1EA74F4))(this);
	}
	template <typename T = void> T set_Fake(bool value) {
		return ((T (*)(MonitorPvpClanInfo*, bool))(Il2CppBase() + 0x1EA74FC))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(MonitorPvpClanInfo*, Il2CppObject*))(Il2CppBase() + 0x1EA7508))(this, other);
	}
	template <typename T = bool> T Equals_1(MonitorPvpClanInfo* other) {
		return ((T (*)(MonitorPvpClanInfo*, MonitorPvpClanInfo*))(Il2CppBase() + 0x1EA7578))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(MonitorPvpClanInfo*))(Il2CppBase() + 0x1EA75F4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MonitorPvpClanInfo*))(Il2CppBase() + 0x1EA768C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(MonitorPvpClanInfo*, uintptr_t))(Il2CppBase() + 0x1EA76F0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(MonitorPvpClanInfo*))(Il2CppBase() + 0x1EA77A8))(this);
	}
	template <typename T = void> T MergeFrom(MonitorPvpClanInfo* other) {
		return ((T (*)(MonitorPvpClanInfo*, MonitorPvpClanInfo*))(Il2CppBase() + 0x1EA7884))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(MonitorPvpClanInfo*, uintptr_t))(Il2CppBase() + 0x1EA78DC))(this, input);
	}

};

}
