#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaBadFpsStats
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaBadFpsStats"));
	}

	template <typename T = MessageParser1ArenaBadFpsStats*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SumTicsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& sumTics_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& StatsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ArenaBadFpsStatObject*>*> static T& _repeated_stats_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1ArenaBadFpsStatObject*>*> T& stats_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& FramesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ArenaFrameInfo*>*> static T& _repeated_frames_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = RepeatedField1ArenaFrameInfo*>*> T& frames_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1ArenaBadFpsStats*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A17BF8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A17C5C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaBadFpsStats*))(Il2CppBase() + 0x1A17D7C))(this);
	}
	template <typename T = ArenaBadFpsStats*> T Clone() {
		return ((T (*)(ArenaBadFpsStats*))(Il2CppBase() + 0x1A17F5C))(this);
	}
	template <typename T = int64_t> T get_SumTics() {
		return ((T (*)(ArenaBadFpsStats*))(Il2CppBase() + 0x1A17FB8))(this);
	}
	template <typename T = void> T set_SumTics(int64_t value) {
		return ((T (*)(ArenaBadFpsStats*, int64_t))(Il2CppBase() + 0x1A17FC0))(this, value);
	}
	template <typename T = RepeatedField1ArenaBadFpsStatObject*>*> T get_Stats() {
		return ((T (*)(ArenaBadFpsStats*))(Il2CppBase() + 0x1A17FC8))(this);
	}
	template <typename T = RepeatedField1ArenaFrameInfo*>*> T get_Frames() {
		return ((T (*)(ArenaBadFpsStats*))(Il2CppBase() + 0x1A17FD0))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaBadFpsStats*, Il2CppObject*))(Il2CppBase() + 0x1A17FD8))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaBadFpsStats* other) {
		return ((T (*)(ArenaBadFpsStats*, ArenaBadFpsStats*))(Il2CppBase() + 0x1A18048))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaBadFpsStats*))(Il2CppBase() + 0x1A18110))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaBadFpsStats*))(Il2CppBase() + 0x1A18194))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaBadFpsStats*, uintptr_t))(Il2CppBase() + 0x1A181F8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaBadFpsStats*))(Il2CppBase() + 0x1A182F8))(this);
	}
	template <typename T = void> T MergeFrom(ArenaBadFpsStats* other) {
		return ((T (*)(ArenaBadFpsStats*, ArenaBadFpsStats*))(Il2CppBase() + 0x1A1841C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaBadFpsStats*, uintptr_t))(Il2CppBase() + 0x1A184C8))(this, input);
	}

};

}
