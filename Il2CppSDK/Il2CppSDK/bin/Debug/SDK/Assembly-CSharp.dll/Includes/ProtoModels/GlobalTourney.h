#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GlobalTourney
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GlobalTourney"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ClansFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_clans_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& clans_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UpdateFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& update_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& LeadersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_leaders_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> T& leaders_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x12DDF30))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x12DDF94))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GlobalTourney*))(Il2CppBase() + 0x12DE0B4))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(GlobalTourney*))(Il2CppBase() + 0x12DE298))(this);
	}
	template <typename T = void*> T get_Clans() {
		return ((T (*)(GlobalTourney*))(Il2CppBase() + 0x12DE2F4))(this);
	}
	template <typename T = bool> T get_Update() {
		return ((T (*)(GlobalTourney*))(Il2CppBase() + 0x12DE2FC))(this);
	}
	template <typename T = void> T set_Update(bool value) {
		return ((T (*)(GlobalTourney*, bool))(Il2CppBase() + 0x12DE304))(this, value);
	}
	template <typename T = void*> T get_Leaders() {
		return ((T (*)(GlobalTourney*))(Il2CppBase() + 0x12DE310))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(GlobalTourney*, uintptr_t))(Il2CppBase() + 0x12DE318))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(GlobalTourney*, uintptr_t))(Il2CppBase() + 0x12DE388))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GlobalTourney*))(Il2CppBase() + 0x12DE460))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GlobalTourney*))(Il2CppBase() + 0x12DE4DC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GlobalTourney*, uintptr_t))(Il2CppBase() + 0x12DE540))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GlobalTourney*))(Il2CppBase() + 0x12DE65C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(GlobalTourney*, uintptr_t))(Il2CppBase() + 0x12DE75C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GlobalTourney*, uintptr_t))(Il2CppBase() + 0x12DE808))(this, input);
	}

};

}
