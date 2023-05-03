
#ifndef DETAIL_GZ_COMMON_GEOSPATIAL_VISIBLE_H
#define DETAIL_GZ_COMMON_GEOSPATIAL_VISIBLE_H

#ifdef GZ_COMMON_GEOSPATIAL_STATIC_DEFINE
#  define DETAIL_GZ_COMMON_GEOSPATIAL_VISIBLE
#  define DETAIL_GZ_COMMON_GEOSPATIAL_HIDDEN
#else
#  ifndef DETAIL_GZ_COMMON_GEOSPATIAL_VISIBLE
#    ifdef gz_common5_geospatial_EXPORTS
        /* We are building this library */
#      define DETAIL_GZ_COMMON_GEOSPATIAL_VISIBLE __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define DETAIL_GZ_COMMON_GEOSPATIAL_VISIBLE __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef DETAIL_GZ_COMMON_GEOSPATIAL_HIDDEN
#    define DETAIL_GZ_COMMON_GEOSPATIAL_HIDDEN __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef GZ_DEPRECATED_ALL_VERSIONS
#  define GZ_DEPRECATED_ALL_VERSIONS __attribute__ ((__deprecated__))
#endif

#ifndef GZ_DEPRECATED_ALL_VERSIONS_EXPORT
#  define GZ_DEPRECATED_ALL_VERSIONS_EXPORT DETAIL_GZ_COMMON_GEOSPATIAL_VISIBLE GZ_DEPRECATED_ALL_VERSIONS
#endif

#ifndef GZ_DEPRECATED_ALL_VERSIONS_NO_EXPORT
#  define GZ_DEPRECATED_ALL_VERSIONS_NO_EXPORT DETAIL_GZ_COMMON_GEOSPATIAL_HIDDEN GZ_DEPRECATED_ALL_VERSIONS
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef GZ_COMMON_GEOSPATIAL_NO_DEPRECATED
#    define GZ_COMMON_GEOSPATIAL_NO_DEPRECATED
#  endif
#endif

#endif /* DETAIL_GZ_COMMON_GEOSPATIAL_VISIBLE_H */
