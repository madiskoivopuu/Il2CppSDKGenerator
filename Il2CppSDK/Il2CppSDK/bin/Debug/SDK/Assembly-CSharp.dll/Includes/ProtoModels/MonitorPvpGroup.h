#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class MonitorPvpGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "MonitorPvpGroup"));
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
	template <typename T = int32_t> static T& ClansFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_clans_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& clans_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& PvpWindowFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& pvpWindow_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& LevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& level_() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& SizeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& size_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& LanguageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& language_() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> static T& StartTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& startTime_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& EndTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& endTime_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& IsFakeGroupFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isFakeGroup_() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA7AAC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA7B10))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA7C30))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA7DD4))(this);
	}
	template <typename T = int64_t> T get_Id() {
		return ((T (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA7E30))(this);
	}
	template <typename T = void> T set_Id(int64_t value) {
		return ((T (*)(MonitorPvpGroup*, int64_t))(Il2CppBase() + 0x1EA7E38))(this, value);
	}
	template <typename T = void*> T get_Clans() {
		return ((T (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA7E40))(this);
	}
	template <typename T = int32_t> T get_PvpWindow() {
		return ((T (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA7E48))(this);
	}
	template <typename T = void> T set_PvpWindow(int32_t value) {
		return ((T (*)(MonitorPvpGroup*, int32_t))(Il2CppBase() + 0x1EA7E50))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA7E58))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(MonitorPvpGroup*, int32_t))(Il2CppBase() + 0x1EA7E60))(this, value);
	}
	template <typename T = int32_t> T get_Size() {
		return ((T (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA7E68))(this);
	}
	template <typename T = void> T set_Size(int32_t value) {
		return ((T (*)(MonitorPvpGroup*, int32_t))(Il2CppBase() + 0x1EA7E70))(this, value);
	}
	template <typename T = int32_t> T get_Language() {
		return ((T (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA7E78))(this);
	}
	template <typename T = void> T set_Language(int32_t value) {
		return ((T (*)(MonitorPvpGroup*, int32_t))(Il2CppBase() + 0x1EA7E80))(this, value);
	}
	template <typename T = int64_t> T get_StartTime() {
		return ((T (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA7E88))(this);
	}
	template <typename T = void> T set_StartTime(int64_t value) {
		return ((T (*)(MonitorPvpGroup*, int64_t))(Il2CppBase() + 0x1EA7E90))(this, value);
	}
	template <typename T = int64_t> T get_EndTime() {
		return ((T (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA7E98))(this);
	}
	template <typename T = void> T set_EndTime(int64_t value) {
		return ((T (*)(MonitorPvpGroup*, int64_t))(Il2CppBase() + 0x1EA7EA0))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA7EA8))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(MonitorPvpGroup*, int64_t))(Il2CppBase() + 0x1EA7EB0))(this, value);
	}
	template <typename T = bool> T get_IsFakeGroup() {
		return ((T (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA7EB8))(this);
	}
	template <typename T = void> T set_IsFakeGroup(bool value) {
		return ((T (*)(MonitorPvpGroup*, bool))(Il2CppBase() + 0x1EA7EC0))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(MonitorPvpGroup*, uintptr_t))(Il2CppBase() + 0x1EA7ECC))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(MonitorPvpGroup*, uintptr_t))(Il2CppBase() + 0x1EA7F3C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA8060))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA81B8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(MonitorPvpGroup*, uintptr_t))(Il2CppBase() + 0x1EA821C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA8458))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(MonitorPvpGroup*, uintptr_t))(Il2CppBase() + 0x1EA86F8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(MonitorPvpGroup*, uintptr_t))(Il2CppBase() + 0x1EA87D0))(this, input);
	}

};

}
