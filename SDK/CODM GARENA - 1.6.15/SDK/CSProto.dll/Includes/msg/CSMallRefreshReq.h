#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSMallRefreshReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSMallRefreshReq"));
	}

	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _refresh_times_today() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSMallRefreshReq*))(Il2CppBase() + 0x51F0460))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSMallRefreshReq*, int32_t))(Il2CppBase() + 0x51F0468))(this, value);
	}
	template <typename T = int32_t> T get_refresh_times_today() {
		return ((T (*)(CSMallRefreshReq*))(Il2CppBase() + 0x51F0470))(this);
	}
	template <typename T = void> T set_refresh_times_today(int32_t value) {
		return ((T (*)(CSMallRefreshReq*, int32_t))(Il2CppBase() + 0x51F0478))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSMallRefreshReq*, bool))(Il2CppBase() + 0x51F0480))(this, createIfMissing);
	}

};

}