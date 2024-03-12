#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoginClientInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoginClientInfo"));
	}

	template <typename T = int32_t> T& RAMMb() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& DeviceModel() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& CPUCores() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& GraphicQuality() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ResolutionX() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ResolutionY() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& IsEmulator() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& GPUModel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& OS() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& GraphicAPI() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = int32_t> T get_RAMMb() {
		return ((T (*)(LoginClientInfo*))(Il2CppBase() + 0x17291AC))(this);
	}
	template <typename T = void> T set_RAMMb(int32_t value) {
		return ((T (*)(LoginClientInfo*, int32_t))(Il2CppBase() + 0x17291B4))(this, value);
	}
	template <typename T = Il2CppString*> T get_DeviceModel() {
		return ((T (*)(LoginClientInfo*))(Il2CppBase() + 0x17291BC))(this);
	}
	template <typename T = void> T set_DeviceModel(Il2CppString* value) {
		return ((T (*)(LoginClientInfo*, Il2CppString*))(Il2CppBase() + 0x17291C4))(this, value);
	}
	template <typename T = int32_t> T get_CPUCores() {
		return ((T (*)(LoginClientInfo*))(Il2CppBase() + 0x17291CC))(this);
	}
	template <typename T = void> T set_CPUCores(int32_t value) {
		return ((T (*)(LoginClientInfo*, int32_t))(Il2CppBase() + 0x17291D4))(this, value);
	}
	template <typename T = int32_t> T get_GraphicQuality() {
		return ((T (*)(LoginClientInfo*))(Il2CppBase() + 0x17291DC))(this);
	}
	template <typename T = void> T set_GraphicQuality(int32_t value) {
		return ((T (*)(LoginClientInfo*, int32_t))(Il2CppBase() + 0x17291E4))(this, value);
	}
	template <typename T = int32_t> T get_ResolutionX() {
		return ((T (*)(LoginClientInfo*))(Il2CppBase() + 0x17291EC))(this);
	}
	template <typename T = void> T set_ResolutionX(int32_t value) {
		return ((T (*)(LoginClientInfo*, int32_t))(Il2CppBase() + 0x17291F4))(this, value);
	}
	template <typename T = int32_t> T get_ResolutionY() {
		return ((T (*)(LoginClientInfo*))(Il2CppBase() + 0x17291FC))(this);
	}
	template <typename T = void> T set_ResolutionY(int32_t value) {
		return ((T (*)(LoginClientInfo*, int32_t))(Il2CppBase() + 0x1729204))(this, value);
	}
	template <typename T = bool> T get_IsEmulator() {
		return ((T (*)(LoginClientInfo*))(Il2CppBase() + 0x172920C))(this);
	}
	template <typename T = void> T set_IsEmulator(bool value) {
		return ((T (*)(LoginClientInfo*, bool))(Il2CppBase() + 0x1729214))(this, value);
	}
	template <typename T = Il2CppString*> T get_GPUModel() {
		return ((T (*)(LoginClientInfo*))(Il2CppBase() + 0x1729220))(this);
	}
	template <typename T = void> T set_GPUModel(Il2CppString* value) {
		return ((T (*)(LoginClientInfo*, Il2CppString*))(Il2CppBase() + 0x1729228))(this, value);
	}
	template <typename T = Il2CppString*> T get_OS() {
		return ((T (*)(LoginClientInfo*))(Il2CppBase() + 0x1729230))(this);
	}
	template <typename T = void> T set_OS(Il2CppString* value) {
		return ((T (*)(LoginClientInfo*, Il2CppString*))(Il2CppBase() + 0x1729238))(this, value);
	}
	template <typename T = Il2CppString*> T get_GraphicAPI() {
		return ((T (*)(LoginClientInfo*))(Il2CppBase() + 0x1729240))(this);
	}
	template <typename T = void> T set_GraphicAPI(Il2CppString* value) {
		return ((T (*)(LoginClientInfo*, Il2CppString*))(Il2CppBase() + 0x1729248))(this, value);
	}

};

}
