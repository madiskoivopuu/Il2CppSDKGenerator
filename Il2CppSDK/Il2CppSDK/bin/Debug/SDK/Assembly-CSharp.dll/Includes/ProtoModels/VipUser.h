#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class VipUser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "VipUser"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& LevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& level_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& VipBonusesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_vipBonuses_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& vipBonuses_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x15CF5DC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x15CF640))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(VipUser*))(Il2CppBase() + 0x15CF760))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(VipUser*))(Il2CppBase() + 0x15CF8C0))(this);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(VipUser*))(Il2CppBase() + 0x15CF91C))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(VipUser*, int32_t))(Il2CppBase() + 0x15CF924))(this, value);
	}
	template <typename T = void*> T get_VipBonuses() {
		return ((T (*)(VipUser*))(Il2CppBase() + 0x15CF92C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(VipUser*, uintptr_t))(Il2CppBase() + 0x15CF934))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(VipUser*, uintptr_t))(Il2CppBase() + 0x15CF9A4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(VipUser*))(Il2CppBase() + 0x15CFA40))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(VipUser*))(Il2CppBase() + 0x15CFAA8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(VipUser*, uintptr_t))(Il2CppBase() + 0x15CFB0C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(VipUser*))(Il2CppBase() + 0x15CFBD8))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(VipUser*, uintptr_t))(Il2CppBase() + 0x15CFCBC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(VipUser*, uintptr_t))(Il2CppBase() + 0x15CFD40))(this, input);
	}

};

}
