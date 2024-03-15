#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class LoginUserDeviceInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "LoginUserDeviceInfo"));
	}

	 static MessageParser1ProtoModels::LoginUserDeviceInfo*>*& _parser() {
		return *(MessageParser1ProtoModels::LoginUserDeviceInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& RAMMbFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& rAMMb_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& DeviceModelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& deviceModel_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& CPUCoresFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& cPUCores_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& GraphicQualityFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& graphicQuality_() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> static R& ResolutionXFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& resolutionX_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& ResolutionYFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& resolutionY_() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = int32_t> static R& IsEmulatorFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isEmulator_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& PlatformFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::PlatformType*> R& platform_() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = int32_t> static R& GPUModelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& gPUModel_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& OSFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& oS_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& GraphicAPIFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& graphicAPI_() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	 static MessageParser1ProtoModels::LoginUserDeviceInfo*>* get_Parser() {
		return ((MessageParser1ProtoModels::LoginUserDeviceInfo*>* (*)(void *))(Il2CppBase() + 0x172C0A4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x172C108))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C228))(this);
	}
	template <typename R = ProtoModels::LoginUserDeviceInfo*> R Clone() {
		return ((R (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C320))(this);
	}
	template <typename R = int32_t> R get_RAMMb() {
		return ((R (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C37C))(this);
	}
	template <typename R = void> R set_RAMMb(int32_t value) {
		return ((R (*)(LoginUserDeviceInfo*, int32_t))(Il2CppBase() + 0x172C384))(this, value);
	}
	template <typename R = Il2CppString*> R get_DeviceModel() {
		return ((R (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C38C))(this);
	}
	template <typename R = void> R set_DeviceModel(Il2CppString* value) {
		return ((R (*)(LoginUserDeviceInfo*, Il2CppString*))(Il2CppBase() + 0x1729A30))(this, value);
	}
	template <typename R = int32_t> R get_CPUCores() {
		return ((R (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C394))(this);
	}
	template <typename R = void> R set_CPUCores(int32_t value) {
		return ((R (*)(LoginUserDeviceInfo*, int32_t))(Il2CppBase() + 0x172C39C))(this, value);
	}
	template <typename R = int32_t> R get_GraphicQuality() {
		return ((R (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C3A4))(this);
	}
	template <typename R = void> R set_GraphicQuality(int32_t value) {
		return ((R (*)(LoginUserDeviceInfo*, int32_t))(Il2CppBase() + 0x172C3AC))(this, value);
	}
	template <typename R = int32_t> R get_ResolutionX() {
		return ((R (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C3B4))(this);
	}
	template <typename R = void> R set_ResolutionX(int32_t value) {
		return ((R (*)(LoginUserDeviceInfo*, int32_t))(Il2CppBase() + 0x172C3BC))(this, value);
	}
	template <typename R = int32_t> R get_ResolutionY() {
		return ((R (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C3C4))(this);
	}
	template <typename R = void> R set_ResolutionY(int32_t value) {
		return ((R (*)(LoginUserDeviceInfo*, int32_t))(Il2CppBase() + 0x172C3CC))(this, value);
	}
	template <typename R = bool> R get_IsEmulator() {
		return ((R (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C3D4))(this);
	}
	template <typename R = void> R set_IsEmulator(bool value) {
		return ((R (*)(LoginUserDeviceInfo*, bool))(Il2CppBase() + 0x172C3DC))(this, value);
	}
	template <typename R = ProtoModels::PlatformType*> R get_Platform() {
		return ((R (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C3E8))(this);
	}
	template <typename R = void> R set_Platform(ProtoModels::PlatformType* value) {
		return ((R (*)(LoginUserDeviceInfo*, ProtoModels::PlatformType*))(Il2CppBase() + 0x172C3F0))(this, value);
	}
	template <typename R = Il2CppString*> R get_GPUModel() {
		return ((R (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C3F8))(this);
	}
	template <typename R = void> R set_GPUModel(Il2CppString* value) {
		return ((R (*)(LoginUserDeviceInfo*, Il2CppString*))(Il2CppBase() + 0x1729AB0))(this, value);
	}
	template <typename R = Il2CppString*> R get_OS() {
		return ((R (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C400))(this);
	}
	template <typename R = void> R set_OS(Il2CppString* value) {
		return ((R (*)(LoginUserDeviceInfo*, Il2CppString*))(Il2CppBase() + 0x1729B30))(this, value);
	}
	template <typename R = Il2CppString*> R get_GraphicAPI() {
		return ((R (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C408))(this);
	}
	template <typename R = void> R set_GraphicAPI(Il2CppString* value) {
		return ((R (*)(LoginUserDeviceInfo*, Il2CppString*))(Il2CppBase() + 0x1729BB0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(LoginUserDeviceInfo*, Il2CppObject*))(Il2CppBase() + 0x172C410))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::LoginUserDeviceInfo* other) {
		return ((R (*)(LoginUserDeviceInfo*, ProtoModels::LoginUserDeviceInfo*))(Il2CppBase() + 0x172C480))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C590))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C718))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(LoginUserDeviceInfo*, uintptr_t))(Il2CppBase() + 0x172C77C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(LoginUserDeviceInfo*))(Il2CppBase() + 0x172C9AC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::LoginUserDeviceInfo* other) {
		return ((R (*)(LoginUserDeviceInfo*, ProtoModels::LoginUserDeviceInfo*))(Il2CppBase() + 0x172CC84))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(LoginUserDeviceInfo*, uintptr_t))(Il2CppBase() + 0x172CD68))(this, input);
	}

};

}
