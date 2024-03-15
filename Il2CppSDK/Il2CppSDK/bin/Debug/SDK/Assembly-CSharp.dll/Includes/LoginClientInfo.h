#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoginClientInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoginClientInfo"));
	}

	template <typename R = int32_t> R& RAMMb() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& DeviceModel() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& CPUCores() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& GraphicQuality() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> R& ResolutionX() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& ResolutionY() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = bool> R& IsEmulator() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& GPUModel() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& OS() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& GraphicAPI() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = int32_t> R get_RAMMb() {
		return ((R (*)(LoginClientInfo*))(Il2CppBase() + 0x17291AC))(this);
	}
	template <typename R = void> R set_RAMMb(int32_t value) {
		return ((R (*)(LoginClientInfo*, int32_t))(Il2CppBase() + 0x17291B4))(this, value);
	}
	template <typename R = Il2CppString*> R get_DeviceModel() {
		return ((R (*)(LoginClientInfo*))(Il2CppBase() + 0x17291BC))(this);
	}
	template <typename R = void> R set_DeviceModel(Il2CppString* value) {
		return ((R (*)(LoginClientInfo*, Il2CppString*))(Il2CppBase() + 0x17291C4))(this, value);
	}
	template <typename R = int32_t> R get_CPUCores() {
		return ((R (*)(LoginClientInfo*))(Il2CppBase() + 0x17291CC))(this);
	}
	template <typename R = void> R set_CPUCores(int32_t value) {
		return ((R (*)(LoginClientInfo*, int32_t))(Il2CppBase() + 0x17291D4))(this, value);
	}
	template <typename R = int32_t> R get_GraphicQuality() {
		return ((R (*)(LoginClientInfo*))(Il2CppBase() + 0x17291DC))(this);
	}
	template <typename R = void> R set_GraphicQuality(int32_t value) {
		return ((R (*)(LoginClientInfo*, int32_t))(Il2CppBase() + 0x17291E4))(this, value);
	}
	template <typename R = int32_t> R get_ResolutionX() {
		return ((R (*)(LoginClientInfo*))(Il2CppBase() + 0x17291EC))(this);
	}
	template <typename R = void> R set_ResolutionX(int32_t value) {
		return ((R (*)(LoginClientInfo*, int32_t))(Il2CppBase() + 0x17291F4))(this, value);
	}
	template <typename R = int32_t> R get_ResolutionY() {
		return ((R (*)(LoginClientInfo*))(Il2CppBase() + 0x17291FC))(this);
	}
	template <typename R = void> R set_ResolutionY(int32_t value) {
		return ((R (*)(LoginClientInfo*, int32_t))(Il2CppBase() + 0x1729204))(this, value);
	}
	template <typename R = bool> R get_IsEmulator() {
		return ((R (*)(LoginClientInfo*))(Il2CppBase() + 0x172920C))(this);
	}
	template <typename R = void> R set_IsEmulator(bool value) {
		return ((R (*)(LoginClientInfo*, bool))(Il2CppBase() + 0x1729214))(this, value);
	}
	template <typename R = Il2CppString*> R get_GPUModel() {
		return ((R (*)(LoginClientInfo*))(Il2CppBase() + 0x1729220))(this);
	}
	template <typename R = void> R set_GPUModel(Il2CppString* value) {
		return ((R (*)(LoginClientInfo*, Il2CppString*))(Il2CppBase() + 0x1729228))(this, value);
	}
	template <typename R = Il2CppString*> R get_OS() {
		return ((R (*)(LoginClientInfo*))(Il2CppBase() + 0x1729230))(this);
	}
	template <typename R = void> R set_OS(Il2CppString* value) {
		return ((R (*)(LoginClientInfo*, Il2CppString*))(Il2CppBase() + 0x1729238))(this, value);
	}
	template <typename R = Il2CppString*> R get_GraphicAPI() {
		return ((R (*)(LoginClientInfo*))(Il2CppBase() + 0x1729240))(this);
	}
	template <typename R = void> R set_GraphicAPI(Il2CppString* value) {
		return ((R (*)(LoginClientInfo*, Il2CppString*))(Il2CppBase() + 0x1729248))(this, value);
	}

};

