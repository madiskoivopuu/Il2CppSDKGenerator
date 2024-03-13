#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class LoginUserDeviceInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "LoginUserDeviceInfo"));
	}

	template <typename T = MessageParser1LoginUserDeviceInfo*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& RAMMbFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& rAMMb_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& DeviceModelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& deviceModel_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& CPUCoresFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& cPUCores_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& GraphicQualityFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& graphicQuality_() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& ResolutionXFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& resolutionX_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& ResolutionYFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& resolutionY_() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> static T& IsEmulatorFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isEmulator_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& PlatformFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = PlatformType*> T& platform_() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> static T& GPUModelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& gPUModel_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& OSFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& oS_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& GraphicAPIFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& graphicAPI_() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = MessageParser1LoginUserDeviceInfo*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x172C0A4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x172C108))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C228))(this);
	}
	template <typename T = LoginUserDeviceInfo*> T Clone() {
		return ((T (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C320))(this);
	}
	template <typename T = int32_t> T get_RAMMb() {
		return ((T (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C37C))(this);
	}
	template <typename T = void> T set_RAMMb(int32_t value) {
		return ((T (*)(LoginUserDeviceInfo*, int32_t))(Il2CppBase() + 0x172C384))(this, value);
	}
	template <typename T = Il2CppString*> T get_DeviceModel() {
		return ((T (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C38C))(this);
	}
	template <typename T = void> T set_DeviceModel(Il2CppString* value) {
		return ((T (*)(LoginUserDeviceInfo*, Il2CppString*))(Il2CppBase() + 0x1729A30))(this, value);
	}
	template <typename T = int32_t> T get_CPUCores() {
		return ((T (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C394))(this);
	}
	template <typename T = void> T set_CPUCores(int32_t value) {
		return ((T (*)(LoginUserDeviceInfo*, int32_t))(Il2CppBase() + 0x172C39C))(this, value);
	}
	template <typename T = int32_t> T get_GraphicQuality() {
		return ((T (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C3A4))(this);
	}
	template <typename T = void> T set_GraphicQuality(int32_t value) {
		return ((T (*)(LoginUserDeviceInfo*, int32_t))(Il2CppBase() + 0x172C3AC))(this, value);
	}
	template <typename T = int32_t> T get_ResolutionX() {
		return ((T (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C3B4))(this);
	}
	template <typename T = void> T set_ResolutionX(int32_t value) {
		return ((T (*)(LoginUserDeviceInfo*, int32_t))(Il2CppBase() + 0x172C3BC))(this, value);
	}
	template <typename T = int32_t> T get_ResolutionY() {
		return ((T (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C3C4))(this);
	}
	template <typename T = void> T set_ResolutionY(int32_t value) {
		return ((T (*)(LoginUserDeviceInfo*, int32_t))(Il2CppBase() + 0x172C3CC))(this, value);
	}
	template <typename T = bool> T get_IsEmulator() {
		return ((T (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C3D4))(this);
	}
	template <typename T = void> T set_IsEmulator(bool value) {
		return ((T (*)(LoginUserDeviceInfo*, bool))(Il2CppBase() + 0x172C3DC))(this, value);
	}
	template <typename T = PlatformType*> T get_Platform() {
		return ((T (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C3E8))(this);
	}
	template <typename T = void> T set_Platform(PlatformType* value) {
		return ((T (*)(LoginUserDeviceInfo*, PlatformType*))(Il2CppBase() + 0x172C3F0))(this, value);
	}
	template <typename T = Il2CppString*> T get_GPUModel() {
		return ((T (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C3F8))(this);
	}
	template <typename T = void> T set_GPUModel(Il2CppString* value) {
		return ((T (*)(LoginUserDeviceInfo*, Il2CppString*))(Il2CppBase() + 0x1729AB0))(this, value);
	}
	template <typename T = Il2CppString*> T get_OS() {
		return ((T (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C400))(this);
	}
	template <typename T = void> T set_OS(Il2CppString* value) {
		return ((T (*)(LoginUserDeviceInfo*, Il2CppString*))(Il2CppBase() + 0x1729B30))(this, value);
	}
	template <typename T = Il2CppString*> T get_GraphicAPI() {
		return ((T (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C408))(this);
	}
	template <typename T = void> T set_GraphicAPI(Il2CppString* value) {
		return ((T (*)(LoginUserDeviceInfo*, Il2CppString*))(Il2CppBase() + 0x1729BB0))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(LoginUserDeviceInfo*, Il2CppObject*))(Il2CppBase() + 0x172C410))(this, other);
	}
	template <typename T = bool> T Equals_1(LoginUserDeviceInfo* other) {
		return ((T (*)(LoginUserDeviceInfo*, LoginUserDeviceInfo*))(Il2CppBase() + 0x172C480))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C590))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C718))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(LoginUserDeviceInfo*, uintptr_t))(Il2CppBase() + 0x172C77C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C9AC))(this);
	}
	template <typename T = void> T MergeFrom(LoginUserDeviceInfo* other) {
		return ((T (*)(LoginUserDeviceInfo*, LoginUserDeviceInfo*))(Il2CppBase() + 0x172CC84))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(LoginUserDeviceInfo*, uintptr_t))(Il2CppBase() + 0x172CD68))(this, input);
	}

};

}
